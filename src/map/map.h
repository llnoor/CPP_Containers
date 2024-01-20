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
        int i=-1;
        if (x->key.first < y->key.first) i=-1;
        else if (x->key.first > y->key.first) i=1;
        else i=0;
        return i;
    }

    int compareNode(key_type key, node_type *y) override {
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
          node  = new node_type(std::make_pair(first_arg, TValue()));
          tree_type::insertNode(node);
      }
      return node->key.second;
    }

    std::pair<iterator, bool> insert_or_assign(const TKey &key, const TValue &value) {
        node_type *node = tree_type::findNode(std::make_pair(key, value));
        bool inserted = false;

        if (node == nullptr) {
            node  = new node_type(std::make_pair(key, value));
            inserted = tree_type::insertNode(node);
        } else node->key.second = value;

        return std::pair<iterator, bool>(node, inserted);
    }

    bool contains(const TKey &first_arg) {
        return (tree_type::findNode(std::make_pair(first_arg, TValue())) != nullptr);
    }
};

}

#endif /* CONTAINERS_SRC_MAP_MAP_H_ */
