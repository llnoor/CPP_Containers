#ifndef TREE_H
#define TREE_H

#include <assert.h>

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
    Node<TKey,TValue> *header = nullptr;
    int numNodes = 0;

public:
    using tree_type = Tree<TKey, TValue>;
    using node_type = Node<TKey,TValue>;
    //using iterator = TreeIterator<tree_type>;
    //using const_iterator = TreeConstIterator<tree_type>;

    Tree(): header(nullptr){ }

    int size() const { return numNodes; }

    node_type* root() { return header; }

    const node_type* root() const { return header; }

    node_type *grandpa(node_type *node) {
        if (node->parent != nullptr
                && node->parent->parent != nullptr)
            return node->parent->parent;
        return nullptr;
    }

    node_type *uncle(node_type *node) {
        node_type *grandparent = grandpa(node);
        if (grandparent == nullptr) return nullptr;
        else if (grandparent->left == node->parent)  return grandparent->right;
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
        node_type *delNode = find (key);
        if (delNode != nullptr) {
          delNode = takeNode(delNode);
          delete delNode;
        }
      }

    node_type *find (TKey key) {
        node_type *node = header;
        if (node==nullptr) return nullptr;

        while (node != nullptr && key != node->key) {
          if (key > node->key) {
            node = node->right;
          } else if (key < node->key) {
            node = node->left;
          }
        }
        return node;
    }


    static node_type *GetMax(node_type *node) {
        if (node == nullptr) return nullptr;
        while (node->right != nullptr) {
            node = node->right;
        }
        return node;
    }

    static node_type *GetMin(node_type *node) {
        if (node == nullptr) return nullptr;
        while (node->left != nullptr) {
            node = node->left;
        }
        return node;
    }


    void replace_child_of_parent(node_type *x, node_type *y) {
        if (x->parent != nullptr) {
          if (x == x->parent->left) {
              x->parent->left = y;
          } else if (x == x->parent->right) {
              x->parent->right = y;
          }
        }
      }

    void replace_node(node_type *x, node_type *y)  {
        replace_child_of_parent(x,y);
        replace_child_of_parent(y,x);

        node_type *tmp = x->left;
        x->left = y->left;
        y->left = tmp;

        tmp = x->right;
        x->right = y->right;
        y->right = tmp;

        tmp = x->parent;
        x->parent = y->parent;
        y->parent = tmp;

        bool tmp_red = x->red;
        x->red = y->red;
        y->red = tmp_red;

        if (x->left != nullptr) x->left->parent = x;
        if (x->right != nullptr) x->right->parent = x;
        if (y->left != nullptr) y->left->parent = y;
        if (y->right != nullptr) y->right->parent = y;
      }


    // Надо удалить значение-ключ
    // Это значение хранится в узле
    // Этот узел отправляем в эту функцию чтобы выдернуть из дерева и уничтожить
    // Функцию надо сводить к удалению узла который имеет только одногосына или вообще не имеет
    // Известно что у узла слева находятся значения меньше значения узла
    // Поэтому делаем замену (узел <-> максимальный узел среди левой ветки этого узла)
    // У этого узла нет правого сына.
    node_type *takeNode(node_type *node) {
        if (node == nullptr) {  // если узел пустой, возвращает пустой узел
            return nullptr;
        }

        node_type *delNode = node;

        if (delNode->left != nullptr) {
            delNode = GetMax(delNode->left);
        } else if (delNode->right != nullptr) {
            delNode = GetMin(delNode->right);
        }

        if (delNode != node) {
            replace_node(delNode,node);
            if (header == node) {
                header = delNode;
            }
            delNode = node;
        }

        if (delNode->red == false) {
            //if (delNode->left != nullptr) node_type *child = delNode->left;
            //node_type *child = delNode->right;
            node_type *child = delNode->left ? delNode->left : delNode->right;

            if (child == nullptr) {
                delete_case1(delNode);
            } else {
                child->parent = delNode->parent;

            if (delNode->parent->left == delNode) {
                delNode->parent->left = child;
            } else if (delNode->parent->right == delNode) {
                delNode->parent->right = child;
            }

            child->red = false;
            }
        }

        if (delNode->parent != nullptr) {
            if (delNode->parent->left == delNode) {
                delNode->parent->left = nullptr;
            } else if (delNode->parent->right == delNode) {
                delNode->parent->right = nullptr;
            }
        }

        if (header == delNode) {
            header = nullptr;
        }

        numNodes -= 1;

        return delNode;
    }

    void delete_case1(node_type *node) {
       if (node->parent != nullptr) delete_case2(node);
     }

     void delete_case2(node_type *node) {
       node_type *brotherNode = neighbour(node);
       if (brotherNode->red == true) {
         node->parent->red = true;
         brotherNode->red = false;
         if (node == node->parent->left)
           rotate_left(node->parent);
         else
           rotate_right(node->parent);
       }
       delete_case3(node);
     }

     void delete_case3(node_type *node) {
       node_type *brotherNode = neighbour(node);
       if ((node->parent->red == false) && (brotherNode->red == false) &&
           (brotherNode->left == nullptr || brotherNode->left->red == false) &&
           (brotherNode->right == nullptr || brotherNode->right->red == false)) {
         brotherNode->red = true;
         delete_case1(node->parent);
       } else
         delete_case4(node);
     }

     void delete_case4(node_type *node) {
       node_type *brotherNode = neighbour(node);
       if ((node->parent->red == true) && (brotherNode->red == false) &&
           (brotherNode->left == nullptr || brotherNode->left->red == false) &&
           (brotherNode->right == nullptr || brotherNode->right->red == false)) {
         brotherNode->red = true;
         node->parent->red = false;
       } else
         delete_case5(node);
     }

     void delete_case5(node_type *node) {
       node_type *brotherNode = neighbour(node);
       if (brotherNode->red == false) {
         if ((node == node->parent->left) &&
             (brotherNode->right == nullptr ||
              brotherNode->right->red == false) &&
             (brotherNode->left != nullptr && brotherNode->left->red == true)) {
           brotherNode->red = true;
           brotherNode->left->red = false;
           rotate_right(brotherNode);
         } else if ((node == node->parent->right) &&
                    (brotherNode->left == nullptr ||
                     brotherNode->left->red == false) &&
                    (brotherNode->right != nullptr &&
                     brotherNode->right->red == true)) {
           brotherNode->red = true;
           brotherNode->right->red = false;
           rotate_left(brotherNode);
         }
       }
       delete_case6(node);
     }

     void delete_case6(node_type *node) {
       node_type *brotherNode = neighbour(node);
       brotherNode->red = node->parent->red;
       node->parent->red = false;
       if (node == node->parent->left) {
         brotherNode->right->red = false;
         rotate_left(node->parent);
       } else {
         brotherNode->left->red = false;
         rotate_right(node->parent);
       }
     }


    // Функция для добавления новый ноды без балансировки
    // Если ключ ноды меньше ключа рассмаотриваемого узла то добавляем как левый сын
    // Если больше то как правый сын
    // Если равны, то не добавляем (для set)
    bool insert(node_type *newNode) {
        if (header == nullptr) {
            header = newNode;
            // header -> red = false;
            assert(header -> red == false);
        } else {
            node_type *parentNode = header;
            node_type *currentNode = header;
            while (currentNode != nullptr) {
                if (newNode->key < parentNode->key) currentNode = parentNode->left;
                else currentNode = parentNode->right;
                if (newNode->key == parentNode->key) return false;
                if (currentNode != nullptr) parentNode = currentNode;
            }
            newNode->red = (newNode == header) ? false : true;

            if (newNode->key < parentNode->key) parentNode->left = newNode;
            else parentNode->right = newNode;

            newNode->parent = parentNode;

            tree_balancing(newNode); // tree_balancing

            /*while (header->parent !=nullptr) {
                header = header->parent;
            }*/
        }
        numNodes += 1;

        //if (newNode != root()) rebalanceAfterInsert(newNode);

        return true;
    }

    // Балансировка:
    // Перекрашиваем отца в черный, дядя тоже должен быть черным, чтобы черная высота у них совпадала
    // Если дядя красный, тогда ...
    void tree_balancing(node_type *node) {
      if (node->parent == nullptr) node->red = false;
      else if (node->parent->red == false) return;
      else red_uncle(node);
    }

    // Балансировка: Дядя то красный оказывается
    // Если дядя красный, тогда дядю перекрасим в черный.
    // Поскольку дядя черный, дед должен быть красным (если только не корень)
    // Поскольку дед красный, проверим отца деда, он должен быть черным ->tree_balancing
    // Если дяди не существует тогда ...
    void red_uncle(node_type *node) {
      node_type *uncleNode = uncle(node);
      node_type *grandparent;
      if ((uncleNode != nullptr) && (uncleNode->red == true)) {
        node->parent->red = false;
        uncleNode->red = false;
        grandparent = grandpa(node);
        grandparent->red = true;
        tree_balancing(grandparent);
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
        rotate_left(node->parent);
        node = node->left;
      } else if ((node == node->parent->left) && (node->parent == grandparent->right)) {
        rotate_right(node->parent);
        node = node->right;
      }

      // Если узел левый и отец левый, тогда правый поворот для деда
      // Если узел правый и отец правый, тогда левый поворот для деда
      node->parent->red = false;
      grandparent->red = true;
      if ((node == node->parent->left) && (node->parent == grandparent->left)) {
        rotate_right(grandparent);
      } else {
        rotate_left(grandparent);
      }
    }

    // Левый поворот
    // Правый сын узла поднимается на место узла
    // Переназначаем родителя, и правого, левого сына
    void rotate_left(node_type *node) {
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
      if (temp->parent == nullptr) header = temp;
    }

    // Правый поворот
    // Левый сын узла поднимается на место узла
    void rotate_right(node_type *node) {
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
      if (temp->parent == nullptr) header = temp;
    }



};

#endif /* TREE_H */
