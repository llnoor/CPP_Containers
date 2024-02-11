#include <list>
#include "s21_containers/s21_list.h"

int main() {
  s21::list<int> test{1, 2, 3, 4, 5};
  s21::list<int> source{10, 20, 30};
  // std::list<int> test{1, 2, 3, 4, 5};
  // std::list<int> source{10, 20, 30};

  auto it = test.cend();  //5 s21 cend, stl cend: 1 2 3 4 5 10 20 30 
  // --it; //5 before cend:  1 2 3 4 10 20 30 5 
  // auto it = test.cbegin();  //1:  10 20 30 1 2 3 4 5 
  // ++it; //2:  1 10 20 30 2 3 4 5 
  // ++it; //3:  1 2 10 20 30 3 4 5 
  // ++it; //4, before cend s21 --it:  1 2 3 10 20 30 4 5 
  // ++it; //5 s21 cend, stl --it cend: 1 2 3 4 10 20 30 5 
  // ++it; //5(1) s21 cbegin, stl cend: 1 2 3 4 5 10 20 30 
  std::cout << *it << std::endl;
  test.splice(it, source);
  test.print();  // s21

  // for (const auto& value : test) {  // for std
  //   std::cout << value << " ";
  // }
  // std::cout << std::endl;
}
