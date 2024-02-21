#include <stack>
#include "../s21_containers/s21_stack.h"

int main() {
  s21::stack<int> test{1, 2, 3};
  s21::stack<int> copy(test);
  s21::stack<int> moved(std::move(copy));
  copy.swap(moved);
  std::cout << "s21:" << std::endl;
  test.print();
  copy.print();
  moved.print();

  std::cout << "std:" << std::endl;
  std::stack<int> std_test;
  std_test.push(1);
  std_test.push(2);
  std_test.push(3);
  std::stack<int> std_copy(std_test);
  std::stack<int> std_moved(std::move(std_copy));
  std_copy.swap(std_moved);

  std::stack<int> init_temp_1(std_test);
  std::stack<int> prnt_temp_1;
    while (!init_temp_1.empty()) {
      auto val = init_temp_1.top();
      prnt_temp_1.push(val);
      init_temp_1.pop();
    }
    while (!prnt_temp_1.empty()) {
      std::cout << prnt_temp_1.top() << " ";
      prnt_temp_1.pop();
    }
  std::cout << std::endl;

  std::stack<int> init_temp_2(std_copy);
  std::stack<int> prnt_temp_2;
    while (!init_temp_2.empty()) {
      auto val = init_temp_2.top();
      prnt_temp_2.push(val);
      init_temp_2.pop();
    }
    while (!prnt_temp_2.empty()) {
      std::cout << prnt_temp_2.top() << " ";
      prnt_temp_2.pop();
    }
  std::cout << std::endl;

  std::stack<int> init_temp_3(std_moved);
  std::stack<int> prnt_temp_3;
    while (!init_temp_3.empty()) {
      auto val = init_temp_3.top();
      prnt_temp_3.push(val);
      init_temp_3.pop();
    }
    while (!prnt_temp_3.empty()) {
      std::cout << prnt_temp_3.top() << " ";
      prnt_temp_3.pop();
    }
  std::cout << std::endl;
}
