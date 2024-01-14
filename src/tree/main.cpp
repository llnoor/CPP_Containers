//#include <QCoreApplication>
#include <iostream>
#include "tree.h"

using namespace s21;

static bool showTree(const TreeNode<int,int>* root, FILE* f, int level = 0) {
    int i;
    for (i = 0; i < level; ++i) {
        fprintf(f, "    ");
    }
    if (root == 0) {
        fprintf(f, "null\n");
    } else {
        int v = root->key;
        fprintf(f, "%d", v);
        if (root->red)
            fprintf(f, " red\n");
        else
            fprintf(f, " black\n");
        showTree(root->left, f, level+1);
        showTree(root->right, f, level+1);
    }

    return true;
}

int main() {

    Tree <int,int>tree;


    std::cout << "Tree!!!" << std::endl;
    //std::cout << "Size: " <<  tree.size() << std::endl;

    tree.add(100);
    tree.add(50);
    tree.add(40);
    tree.add(20);
    tree.add(19);
    tree.add(18);
    tree.add(17);
    tree.add(16);
    tree.add(15);
    tree.add(60);
    tree.add(59);
    tree.add(58);
    tree.add(61);
    tree.add(70);
    tree.add(65);
    tree.add(150);
    tree.add(140);
    tree.add(160);
    tree.erase(60);
    tree.erase(59);



    //std::cout << "Size: " <<  tree.size() << std::endl;

    showTree(tree.root(), stdout);


    //tree.add(node);

    //std::cout << "Size2: " <<  tree.size() << std::endl;




    return 0;
}
