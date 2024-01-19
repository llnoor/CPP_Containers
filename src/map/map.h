#ifndef CONTAINERS_SRC_MAP_MAP_H_
#define CONTAINERS_SRC_MAP_MAP_H_

#include <assert.h>
#include <utility>
#include <stdexcept>
#include <iostream>

#include "../tree/tree.h"

namespace s21 {

template <typename TKey, typename TValue>
class map : public Tree<std::pair<TKey, TValue>> {
public:
    using key_type = std::pair<TKey, TValue>;

    using tree_type = Tree<key_type>;
    using node_type = TreeNode<key_type>;
    using typename tree_type::size_type;
    using typename tree_type::reference;
    using typename tree_type::const_reference;
    using typename tree_type::iterator;
    using typename tree_type::const_iterator;


    int compareNode(node_type *x, node_type *y) override {
        //std::cout << "It is map (node)" << std::endl;
        int i=-1;
        if (x->key.first < y->key.first) i=-1;
        else if (x->key.first > y->key.first) i=1;
        else i=0;
        return i;
    }

    int compareNode(key_type key, node_type *y) override {
        //std::cout << "It is map" << std::endl;
        int i=-1;
        if (key.first < y->key.first) i=-1;
        else if (key.first > y->key.first) i=1;
        else i=0;
        return i;
    }

    map() : tree_type() {}

    map(std::initializer_list<key_type> const &items) {
        for (const_reference item : items) {
            node_type *node = new node_type(item);
            if (!tree_type::insertNode(node)) delete node;
        }
    }

    // no matching function for call to 'std::pair<int, int>::pair(int)'
    // https://ru.stackoverflow.com/questions/1067488/%D0%92%D0%BE%D0%B7%D0%BD%D0%B8%D0%BA%D0%B0%D0%B5%D1%82-%D0%BE%D1%88%D0%B8%D0%B1%D0%BA%D0%B0-no-matching-function-for-call-to-%D0%BF%D1%80%D0%B8-%D0%BF%D0%BE%D0%BF%D1%8B%D1%82%D0%BA%D0%B5-%D0%BF%D0%B5%D1%80%D0%B5%D0%B4%D0%B0%D1%82%D1%8C-%D0%BE%D0%B1%D1%8A%D0%B5%D0%BA%D1%82


    /*map(const map &second) {
        if (this->header_ != second.header_) {
          tree_type::clearTree(this->header_);

          if (second.header_ != nullptr) {
            this->header_ = new node_type(second.header_);
            tree_type::сopyWithoutBalancing(second.header_, this->header_);
          }

          this->num_nodes_ = second.num_nodes_;
        }
    }

    map& operator=(const map& second) {
        if (this->header_ != second.header_) {
            tree_type::clearTree(this->header_);
            if (second.header_ != nullptr) {
                this->header_ = new node_type(second.header_);
                tree_type::сopyWithoutBalancing(second.header_, this->header_);
            }
            this->num_nodes_ = second.num_nodes_;
        }
        return *this;
    }

    map(map &&second) { tree_type::moveConstructor(std::move(second)); }

    map &operator=(map &&second) {
        tree_type::moveConstructor(std::move(second));
        return *this;
    }*/


    /*map& operator=(const map& second) {
        if (this->header_ != second.header_) {
            clearTree(this->header_);
            if (second.header_ != nullptr) {
                this->header_ = new node_type(second.header_);
                сopyWithoutBalancing(second.header_, this->header_);
            }
            this->num_nodes_ = second.num_nodes_;
        }
        return *this;
    }

    map &operator=(map &&second) {
      moveConstructor(std::move(second));
      return *this;
    }*/


    node_type *findMap(TKey &key) {
        node_type *node = tree_type::root();
        if (node==nullptr) return nullptr;

        while (node != nullptr &&
               0 != compareNode(key, node)
               ) {
            if (compareNode(key, node) > 0)  node = node->right;
            else if (compareNode(key, node) < 0) node = node->left;
        }
        return node;
    }

    TValue &at(const TKey &first_arg) {
      node_type *node = tree_type::findNode(std::make_pair(first_arg, TValue()));
      if (node == nullptr) throw std::out_of_range("Node does not exists");
      return node->key.second;
    }

    TValue &operator[](const TKey &first_arg) {
      node_type *node = tree_type::findNode(std::make_pair(first_arg, TValue()));
      if (node == nullptr) {
          node_type *node  = new node_type(std::make_pair(first_arg, TValue()));
          tree_type::insertNode(node);
      }
      return node->key.second;
    }

    bool contains(const TKey &first_arg) {
        //std::cout << "It is contains" << std::endl;
        return (tree_type::findNode(std::make_pair(first_arg, TValue())) != nullptr);
    }

};

}

#endif /* CONTAINERS_SRC_MAP_MAP_H_ */
