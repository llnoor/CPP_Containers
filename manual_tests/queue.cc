#include <queue>
#include "../s21_containers/s21_queue.h"

int main() {
  s21::queue<int> s21_test{1, 2, 3};
  // s21::queue<int> s21_moved(std::move(s21_test));
  s21::queue<int> s21_moved = std::move(s21_test);
  s21_test.swap(s21_moved);

  std::cout << "s21_test front: " << s21_test.front() << std::endl;
  std::cout << "s21_test back: " << s21_test.back() << std::endl;
  std::cout << "s21_test: " << std::endl;
  s21_test.print();

  std::cout << "s21_moved: " << std::endl;
  s21_moved.print();

  /* -------------------- */

  std::queue<int> std_test;
  for (int i = 1; i != 5 + 1; ++i) {
    std_test.push(i);
  }
  std::queue<int> std_copy(std_test);

  while (!std_test.empty()) { // for std
    std::cout << std_test.front() << " ";
    std_test.pop();
  }
  std::cout << std::endl;
  std::cout << "std_test: " << std_test.empty() << std::endl;

  while (!std_copy.empty()) { // for std
    std::cout << std_copy.front() << " ";
    std_copy.pop();
  }
  std::cout << std::endl;
  std::cout << "std_copy: " << std_copy.empty() << std::endl;
}