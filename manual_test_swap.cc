#include <list>
#include "s21_containers/s21_list.h"

int main() {
  s21::list<int> test_1;
  s21::list<int> test_2 = {10, 20, 30};
  test_1.swap(test_2);
  std::cout << "test_1.size = " << test_1.size() << std::endl;  // = 3
  std::cout << "test_2.size = " << test_2.size() << std::endl;  // = 0
  
  auto it_1 = test_1.begin();
  std::cout << "*it_1 = " << *it_1 << std::endl;  // = 10
  ++it_1;
  std::cout << "*it_1 = " << *it_1 << std::endl;  // = 20
  ++it_1;
  std::cout << "*it_1 = " << *it_1 << std::endl;  // = 30
  test_1.print();
  // for (const auto& value : test_1) {  // for std
  //   std::cout << value << " ";
  // }
  // std::cout << std::endl;

  auto it_2 = test_2.begin();
  std::cout << "*it_2 = " << *it_2 << std::endl;  // = 0
  test_2.print(); // segmentation fault here
  // for (const auto& value : test_2) {  // for std
  //   std::cout << value << " ";
  // }
  // std::cout << std::endl;
}
