#include <list>
#include "s21_containers/s21_list.h"

int main() {
  s21::list<std::string> s21_test;
  std::list<std::string> std_test;
  auto s21_it = ++s21_test.begin();
  auto std_it = ++std_test.begin();
  std::cout << *s21_it << std::endl;
  std::cout << *std_it << std::endl;  // segmentation fault here
  std::cout << std::boolalpha << (*s21_it == *std_it) << std::endl;
  
  // for (const auto& value : test_2) {  // for std
  //   std::cout << value << " ";
  // }
  // std::cout << std::endl;
}
