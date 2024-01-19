//#include <QCoreApplication>
#include <iostream>

#include "../multiset/multiset.h"
#include "../set/set.h"


//using namespace s21;

/*static bool showTree(const TreeNode<int,int>* root, FILE* f, int level = 0) {
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
}*/

int main() {

    s21::multiset<int> std_three_obj = {100,200, 300, 100};
    //auto r = std_three_obj.emplace(100, 200, 42, 400);


    for (auto& item : std_three_obj) {
        std::cout << item << ' ';
    }
    std::cout << '\n';

    std::cout << "Count: " << std_three_obj.count(100) << std::endl;

    s21::multiset<char> a;
    a.insert('G');
    a.insert('F');
    a.insert('G');
    a.insert('G');
    a.insert('G');
    a.insert('G');
    for (auto& str : a) {
        std::cout << str << ' ';
    }
    std::cout << '\n';


    std::cout << "Count: " << a.count('G') << std::endl;

    return 0;
}
