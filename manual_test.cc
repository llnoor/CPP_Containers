#include <list>
#include "s21_containers/s21_list.h"

int main() {
  s21::list<int> test = {1, 2, 3, 4, 5};
  s21::list<int> copy(test);
  test.print_debug();
  copy.print_debug();
  std::cout << test.size() << std::endl;
  std::cout << copy.size() << std::endl;

  return 0;
}
