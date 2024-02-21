#include <list>
#include "../s21_containers/s21_list.h"

int main() {
  s21::list<int> s21_test = {1, 2, 3, 4, 5};
  std::list<int> std_test = {1, 2, 3, 4, 5};
  int value = 10;

  s21_test.insert(s21_test.end(), value);
  std_test.insert(std_test.end(), value);
  
  s21_test.print();  // s21
  for (const auto& value : std_test) {  // for std
    std::cout << value << " ";
  }
  std::cout << std::endl;
}
