#ifndef TREE_H
#define TREE_H

#include <assert.h>
#include <utility>

template <typename TKey, typename TValue> class Node {
public:
    using node_type = Node<TKey,TValue>;

    node_type *left, *right, *parent;
    bool    red;
    TKey    key;
    TValue  value;

    Node():
        left(0),
        right(0),
        parent(0),
        red(false),
        key(0),
        value(0){}

    Node(TKey key):
        left(0),
        right(0),
        parent(0),
        red(false),
        key(key),
        value(0){}
};


template <typename TKey, typename TValue>
class Tree {
private:
    Node<TKey,TValue> *header_ = nullptr;
    int num_nodes_ = 0;

public:
    using tree_type = Tree<TKey, TValue>;
    using node_type = Node<TKey,TValue>;
    //using iterator = TreeIterator<tree_type>;
    //using const_iterator = TreeConstIterator<tree_type>;

    Tree(): header_(nullptr){ }

    ~Tree() {
        clearTree(header_);
        num_nodes_ = 0;
    }

    void clearTree(node_type *node) {
        if (node != nullptr) {
            clearTree(node->left);
            clearTree(node->right);
            delete node;
            node = nullptr;
        }
    }

    int size() const { return num_nodes_; }

    node_type* root() { return header_; }

    const node_type* root() const { return header_; }

    node_type *grandpa(node_type *node) {
        if (node->parent != nullptr
                && node->parent->parent != nullptr)
            return node->parent->parent;
        return nullptr;
    }

    node_type *uncle(node_type *node) {
        node_type *grandparent = grandpa(node);
        if (grandparent == nullptr) return nullptr;
        else if (grandparent->left == node->parent) return grandparent->right;
        else return grandparent->left;
    }

    node_type *neighbour(node_type *node) {
        if (node == node->parent->left) return node->parent->right;
        else return node->parent->left;
    }

    void add(TKey key) {
        node_type *node  = new node_type(key);
        insert(node);
    }

    void erase(TKey key) {
        node_type *node = findNode (key);
        if (node != nullptr) {
          node = deleteNode(node);
          delete node;
        }
      }

    node_type *findNode(TKey key) {
        node_type *node = header_;
        if (node==nullptr) return nullptr;

        while (node != nullptr && key != node->key) {
          if (key > node->key)  node = node->right;
          else if (key < node->key) node = node->left;
        }
        return node;
    }

    static node_type *maxNode(node_type *node) {
        if (node == nullptr) return nullptr;
        while (node->right != nullptr)
            node = node->right;
        return node;
    }

    static node_type *minNode(node_type *node) {
        if (node == nullptr) return nullptr;
        while (node->left != nullptr)
            node = node->left;
        return node;
    }

    void replaceChildsOfParent(node_type *x, node_type *y) {
        if (x->parent != nullptr) {
            if (x == x->parent->left) x->parent->left = y;
            else if (x == x->parent->right) x->parent->right = y;
        }
    }

    void replaceNode(node_type *x, node_type *y)  {
        replaceChildsOfParent(x,y);
        replaceChildsOfParent(y,x);

        std::swap(x->left, y->left);
        std::swap(x->right, y->right);
        std::swap(x->parent, y->parent);
        std::swap(x->red, y->red);

        if (x->left != nullptr) x->left->parent = x;
        if (x->right != nullptr) x->right->parent = x;
        if (y->left != nullptr) y->left->parent = y;
        if (y->right != nullptr) y->right->parent = y;
    }

    // Надо удалить значение-ключ
    // Это значение хранится в узле
    // Этот узел отправляем в эту функцию чтобы выдернуть из дерева и уничтожить
    // Функцию надо сводить к удалению узла который имеет только одного сына или вообще не имеет
    // Известно что у узла слева находятся значения меньше значения узла
    // Поэтому делаем замену (узел <-> максимальный узел среди левой ветки этого узла)
    // У этого узла нет правого сына.
    node_type *deleteNode(node_type *node) {
        if (node == nullptr) {  // если узел пустой, возвращает пустой узел
            return nullptr;
        }

        node_type *replaceableNode = node;
        if (replaceableNode->left != nullptr) {
            replaceableNode = maxNode(replaceableNode->left);
        } else if (replaceableNode->right != nullptr) {
            replaceableNode = minNode(replaceableNode->right);
        }

        if (replaceableNode != node) {
            replaceNode(replaceableNode,node);
            if (header_ == node) header_ = replaceableNode;
            replaceableNode = node;
        }

        // Если заменяемый узел черный, нельзя просто удалить узел, так как черная высота меняется
        // Поэтому
        if (replaceableNode->red == false) {
            node_type *child;
            if (replaceableNode->left != nullptr) child = replaceableNode->left;
            else child = replaceableNode->right;

            // Если есть один ребенок (а может быть только один ребенок, так как мы спустились до самого нижнего узла)
            // Тогда этого ребенка поднимаем на место удаляемого узла и меняем цвет на черный
            if (child != nullptr) {
                child->parent = replaceableNode->parent;

                if (replaceableNode->parent->left == replaceableNode) {
                    replaceableNode->parent->left = child;
                } else if (replaceableNode->parent->right == replaceableNode) {
                    replaceableNode->parent->right = child;
                }

                child->red = false;
            } else { //если нет детей
                deleteNodeWithoutChild(replaceableNode);
            }
        }// else: Если заменяемый узел красный, тогда можно просто удалить узел,
        // так как черная высота не меняется

        // Родителю сообщаем, что уходим
        if (replaceableNode->parent != nullptr) {
            if (replaceableNode->parent->left == replaceableNode) {
                replaceableNode->parent->left = nullptr;
            } else if (replaceableNode->parent->right == replaceableNode) {
                replaceableNode->parent->right = nullptr;
            }
        } else header_ = nullptr;  // Если нет родителя, то сообщаем дереву, что оно пусто

        /*if (header_ == replaceableNode) {
            header_ = nullptr;
        }*/

        num_nodes_ -= 1;

        return replaceableNode;
    }


    // Удаляем узла без детей
    // Если узел левый, тогда черного соседа поднимаем на место родителя
    void deleteNodeWithoutChild(node_type *node) {
        if (node->parent != nullptr) {
            node_type *neighbor = neighbour(node);
            if (neighbor->red == true && neighbor != nullptr) {
                node->parent->red = true;
                neighbor->red = false;
                if (node == node->parent->left) rotateLeft(node->parent);
                else rotateRight(node->parent);
            }
            changeNeighborToRed(node);
        }
    }

    // Если родитель черный и сосед черный, тогда поменяем цвет соседа на красный
    void changeNeighborToRed(node_type *node) {
        node_type *neighbor = neighbour(node);
        if ((node->parent->red == false) && (neighbor->red == false) &&
        (neighbor->left == nullptr || neighbor->left->red == false) &&
        (neighbor->right == nullptr || neighbor->right->red == false)) {
            neighbor->red = true;
            deleteNodeWithoutChild(node->parent);
        } else {
            replaceParentNeighborColor(node);
        }
    }

    // Если родитель красный и сосед черный, тогда меняем их цвета
    void replaceParentNeighborColor(node_type *node) {
        node_type *neighbor = neighbour(node);
        if ((node->parent->red == true) && (neighbor->red == false) &&
        (neighbor->left == nullptr || neighbor->left->red == false) &&
        (neighbor->right == nullptr || neighbor->right->red == false)) {
            neighbor->red = true;
            node->parent->red = false;
        } else {
           lowerNeighbor(node);
           raiseNeighbor(node);
        }

    }

    // Если сосед черный и сын соседа черный
    // тогда соседа делаем красным и меняем с сыном
    void lowerNeighbor(node_type *node) {
        node_type *neighbor = neighbour(node);
        if (neighbor->red == false) {
            if ((node == node->parent->left) &&
            (neighbor->right == nullptr || neighbor->right->red == false) &&
            (neighbor->left != nullptr && neighbor->left->red == true)) {
                neighbor->red = true;
                neighbor->left->red = false;
                rotateRight(neighbor);
            } else if ((node == node->parent->right) &&
            (neighbor->left == nullptr || neighbor->left->red == false) &&
            (neighbor->right != nullptr && neighbor->right->red == true)) {
                neighbor->red = true;
                neighbor->right->red = false;
                rotateLeft(neighbor);
            }
        }
    }

    // Если отец и сосед одного цвета
    // тогда отца делаем черным, сына соседа делаем черным
    // поднимаем соседа на место отца
    void raiseNeighbor(node_type *node) {
        node_type *neighbor = neighbour(node);
        neighbor->red = node->parent->red;
        node->parent->red = false;
        if (node == node->parent->left) {
            neighbor->right->red = false;
            rotateLeft(node->parent);
        } else {
            neighbor->left->red = false;
            rotateRight(node->parent);
        }
    }

    // Функция для добавления новый ноды без балансировки
    // Если ключ ноды меньше ключа рассмаотриваемого узла то добавляем как левый сын
    // Если больше то как правый сын
    // Если равны, то не добавляем (для set)
    bool insert(node_type *node) {
        if (header_ == nullptr) {
            header_ = node;
            // header_ -> red = false;
            assert(header_ -> red == false);
        } else {
            node_type *parentNode = header_;
            node_type *currentNode = header_;
            while (currentNode != nullptr) {
                if (node->key < parentNode->key) currentNode = parentNode->left;
                else currentNode = parentNode->right;
                if (node->key == parentNode->key) return false;
                if (currentNode != nullptr) parentNode = currentNode;
            }
            node->red = (node == header_) ? false : true;

            if (node->key < parentNode->key) parentNode->left = node;
            else parentNode->right = node;

            node->parent = parentNode;

            treeBalancing(node);

            /*while (header_->parent !=nullptr) {
                header_ = header_->parent;
            }*/
        }
        num_nodes_ += 1;
        return true;
    }

    // Балансировка:
    // Перекрашиваем отца в черный, дядя тоже должен быть черным, чтобы черная высота у них совпадала
    // Если дядя красный, тогда ...
    void treeBalancing(node_type *node) {
      if (node->parent == nullptr) node->red = false;
      else if (node->parent->red == false) return;
      else redUncle(node);
    }

    // Балансировка: Дядя то красный оказывается
    // Если дядя красный, тогда дядю перекрасим в черный.
    // Поскольку дядя черный, дед должен быть красным (если только не корень)
    // Поскольку дед красный, проверим отца деда, он должен быть черным ->treeBalancing
    // Если дяди не существует тогда ...
    void redUncle(node_type *node) {
      node_type *uncleNode = uncle(node);
      node_type *grandparent;
      if ((uncleNode != nullptr) && (uncleNode->red == true)) {
        node->parent->red = false;
        uncleNode->red = false;
        grandparent = grandpa(node);
        grandparent->red = true;
        treeBalancing(grandparent);
      } else {
        rotate(node);
      }
    }

    // Балансировка
    // Повороты
    void rotate(node_type *node) {
      node_type *grandparent = grandpa(node);

      // Если узел правый и отец левый, тогда правый поворот для отца
      // Если узел левый и отец правый, тогда левый поворот для отца
      if ((node == node->parent->right) && (node->parent == grandparent->left)) {
        rotateLeft(node->parent);
        node = node->left;
      } else if ((node == node->parent->left) && (node->parent == grandparent->right)) {
        rotateRight(node->parent);
        node = node->right;
      }

      // Если узел левый и отец левый, тогда правый поворот для деда
      // Если узел правый и отец правый, тогда левый поворот для деда
      node->parent->red = false;
      grandparent->red = true;
      if ((node == node->parent->left) && (node->parent == grandparent->left)) {
        rotateRight(grandparent);
      } else {
        rotateLeft(grandparent);
      }
    }

    // Левый поворот
    // Правый сын узла поднимается на место узла
    // Переназначаем родителя, правого, левого сына
    void rotateLeft(node_type *node) {
      node_type *temp = node->right;
      temp->parent = node->parent;
      if (node->parent != nullptr) {
        if (node->parent->left == node) node->parent->left = temp;
        else node->parent->right = temp;
      }
      node->right = temp->left;
      if (temp->left != nullptr) temp->left->parent = node;
      node->parent = temp;
      temp->left = node;
      if (temp->parent == nullptr) header_ = temp;
    }

    // Правый поворот
    // Левый сын узла поднимается на место узла
    void rotateRight(node_type *node) {
      node_type *temp = node->left;
      temp->parent = node->parent;
      if (node->parent != nullptr) {
        if (node->parent->left == node) node->parent->left = temp;
        else node->parent->right = temp;
      }
      node->left = temp->right;
      if (temp->right != nullptr) temp->right->parent = node;
      node->parent = temp;
      temp->right = node;
      if (temp->parent == nullptr) header_ = temp;
    }
};

#endif /* TREE_H */
