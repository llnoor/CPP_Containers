#include <list>
#include "../s21_containers/s21_list.h"

int main() {
  s21::list<int> test{1, 2, 3};
  test.insert_many(++test.cbegin(), 4, 5, 6);
  test.print();
  
  // for (const auto& value : test_2) {  // for std
  //   std::cout << value << " ";
  // }
  // std::cout << std::endl;
}
