#ifndef CONTAINERS_SRC_SET_SET_H_
#define CONTAINERS_SRC_SET_SET_H_

#include <assert.h>
#include <utility>
#include <stdexcept>

#include "../tree/tree.h"

namespace s21 {

template <typename TKey>
class set : public Tree<TKey, TKey> {
public:
    using key_type = TKey;
    using value_type = TKey;  // Удалить!!! см дерево

    using tree_type = Tree<key_type, value_type>;
    using node_type = TreeNode<key_type, value_type>;

    using typename tree_type::size_type;
    using typename tree_type::reference;
    using typename tree_type::const_reference;
    using typename tree_type::iterator;
    using typename tree_type::const_iterator;



};

}

#endif /* CONTAINERS_SRC_SET_SET_H_ */
