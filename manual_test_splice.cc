#include <list>
#include "s21_containers/s21_list.h"

int main() {
  s21::list<int> s21_test{1, 2, 3, 4, 5};
  s21::list<int> s21_source{10, 20, 30};
  std::list<int> std_test{1, 2, 3, 4, 5};
  std::list<int> std_source{10, 20, 30};

  auto s21_it = s21_test.cend();  //5 s21 cend, stl cend: 1 2 3 4 5 10 20 30 
  auto std_it = std_test.cend();  //5 s21 cend, stl cend: 1 2 3 4 5 10 20 30 
  // --s21_it; //5 before cend:  1 2 3 4 10 20 30 5 
  // --std_it; //5 before cend:  1 2 3 4 10 20 30 5 

  // auto s21_it = s21_test.cbegin();  //1:  10 20 30 1 2 3 4 5 
  // auto std_it = std_test.cbegin();  //1:  10 20 30 1 2 3 4 5 
  // ++s21_it; //2:  1 10 20 30 2 3 4 5 
  // ++std_it; //2:  1 10 20 30 2 3 4 5 
  // ++s21_it; //3:  1 2 10 20 30 3 4 5 
  // ++std_it; //3:  1 2 10 20 30 3 4 5 
  // ++s21_it; //4, before cend s21 --it:  1 2 3 10 20 30 4 5 
  // ++std_it; //4, before cend s21 --it:  1 2 3 10 20 30 4 5 
  // ++s21_it; //5 s21 cend, stl --it cend: 1 2 3 4 10 20 30 5 
  // ++std_it; //5 s21 cend, stl --it cend: 1 2 3 4 10 20 30 5 
  // ++s21_it; //5(1) s21 cbegin, stl cend: 1 2 3 4 5 10 20 30 
  // ++std_it; //5(1) s21 cbegin, stl cend: 1 2 3 4 5 10 20 30 
  // ++s21_it; //6
  // ++std_it; //6
  std::cout << "s21, iterator pos: " << *s21_it << std::endl;
  s21_test.splice(s21_it, s21_source);
  s21_test.print();  // s21

  std_test.splice(std_it, std_source);
  std::cout << "std, iterator pos: " << *std_it << std::endl;
  for (const auto& value : std_test) {  // for std
    std::cout << value << " ";
  }
  std::cout << std::endl;
}
