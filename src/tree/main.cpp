//#include <QCoreApplication>
#include <iostream>
#include "../map/map.h"
#include "../set/set.h"

#include <map>

using namespace s21;

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

    s21::map<int, int> mp;

    // insert elements in random order
    mp.insert(std::make_pair(1, 1321));
    mp.insert(std::make_pair(2, 221));
    mp.insert(std::make_pair(3, 343));


    std::cout << "mp[1]\t" << mp.at(1) << std::endl;
    std::cout << "mp[2]\t" << mp.at(2) << std::endl;
    std::cout << "mp[3]\t" << mp.at(3) << std::endl;

    mp[1] = 35;
    mp[2] = 0;
    mp[3] = mp[1];

    std::cout << "mp[1]\t" << mp[1] << std::endl;
    std::cout << "mp[2]\t" << mp[2] << std::endl;
    std::cout << "mp[3]\t" << mp[3] << std::endl;

    /*s21::map<int, float> products;
    // установка значений
    //products.insert(std::make_pair(1, 1));
    products.insert({1, 2.4});*/

    /*products[1] = 30;
    products[2] = 80;
    products[3] = 60;*/

    // получение значений
    /*std::cout << "bread\t" << products["bread"] << std::endl;
    std::cout << "milk\t" << products["milk"] << std::endl;
    std::cout << "apple\t" << products["apple"] << std::endl;*/



    /*s21::set<int> std_three_obj = {100,200, 300};
    //auto r = std_three_obj.emplace(100, 200, 42, 400);


    for (auto& item : std_three_obj) {
        std::cout << item << ' ';
    }
    std::cout << '\n';



    s21::set<char> a;
    a.insert('G');
    a.insert('F');
    a.insert('G');
    for (auto& str : a) {
        std::cout << str << ' ';
    }
    std::cout << '\n';*/


    /*Tree <int,int>tree;


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
    tree.erase(59);*/



    //std::cout << "Size: " <<  tree.size() << std::endl;

    //showTree(tree.root(), stdout);


    //tree.add(node);

    //std::cout << "Size2: " <<  tree.size() << std::endl;




    return 0;
}
