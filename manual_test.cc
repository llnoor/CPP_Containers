#include <list>
#include "s21_containers/s21_list.h"

int main() {
  const size_t val = 384307168202282325 / 10000000000;
  s21::list<int> s21_test(val);
  std::list<int> std_test(val);
  std::cout << s21_test.size() << std::endl;
  std::cout << std_test.size() << std::endl;
  std::cout << s21_test.empty() << std::endl;
  std::cout << std_test.empty() << std::endl;
  
  // for (const auto& value : test_2) {  // for std
  //   std::cout << value << " ";
  // }
  // std::cout << std::endl;
}
