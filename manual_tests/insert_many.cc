#include <queue>
#include <stack>
#include "../s21_containers/s21_queue.h"
#include "../s21_containers/s21_stack.h"

int main() {
  // s21::queue<int> s21_test{1, 2, 3};
  // s21_test.insert_many_back(4, 5, 6);
  // s21_test.print();

  s21::stack<int> s21_test{1, 2, 3};
  s21_test.insert_many_front(4, 5, 6);
  s21_test.print();
}
