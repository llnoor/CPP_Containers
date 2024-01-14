#ifndef CONTAINERS_SRC_MAP_MAP_H_
#define CONTAINERS_SRC_MAP_MAP_H_

#include <assert.h>
#include <utility>
#include <stdexcept>

#include "../tree/tree.h"

namespace s21 {

template <typename TKey, typename TValue>
class map : public Tree<std::pair<TKey, TValue>, std::pair<TKey, TValue>> {
public:
    using key_type = std::pair<TKey, TValue>;
    using value_type = std::pair<TKey, TValue>;   // Удалить!!! см дерево

    using tree_type = Tree<key_type, value_type>;
    using node_type = TreeNode<key_type, value_type>;
    using typename tree_type::size_type;
    using typename tree_type::reference;
    using typename tree_type::const_reference;
    using typename tree_type::iterator;
    using typename tree_type::const_iterator;


    int compareNode(node_type *x, node_type *y) {
        int i=-1;
        if (x->key.first < y->key.first) i=-1;
        else if (x->key.first > y->key.first) i=1;
        else i=0;
        return i;
    }

    int compareNode(TKey key, node_type *y) {
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


};

}

#endif /* CONTAINERS_SRC_MAP_MAP_H_ */
