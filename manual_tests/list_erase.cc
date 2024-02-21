#include <list>
#include "../s21_containers/s21_list.h"

int main() {
  /* erase */
  s21::list<int> s21_test = {1, 2, 3, 4, 5};
  std::list<int> std_test = {1, 2, 3, 4, 5};

  s21_test.erase(s21_test.end());
  std_test.erase(--std_test.end()); // somnitelno no ok
  std::cout << "s21_test.size() = " << s21_test.size() << std::endl;
  std::cout << "std_test.size() = " << std_test.size() << std::endl;
  std::cout << std::boolalpha << (s21_test.size() == std_test.size()) << std::endl;

  s21_test.print();  // s21
  for (const auto& value : std_test) {  // for std
    std::cout << value << " ";
  }
  std::cout << std::endl;
}
