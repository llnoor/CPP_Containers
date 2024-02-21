#include <list>
#include "../s21_containers/s21_list.h"

int main() {
  /* merge */
  s21::list<int> s21_test_dest = {1, 2, 3};
  s21::list<int> s21_test_src = {20, 10};
  // s21::list<int> s21_test_dest = {5, 9, 1, 3, 3};
  // s21::list<int> s21_test_src = {8, 7, 2, 3, 4, 4};
  // s21::list<char> s21_test_dest = {'a', 'b', 'c', 'd', 'e'};
  // s21::list<char> s21_test_src = {'Z', 'Y', 'X'};
  // s21::list<std::string> s21_test_dest = {"sus", "amogus", "ABOBA", "sus"};
  // s21::list<std::string> s21_test_src = {"sugoma", "BAOBAB", "same"};

  std::list<int> std_test_dest = {1, 2, 3};
  std::list<int> std_test_src = {20, 10};
  // std::list<int> std_test_dest = {5, 9, 1, 3, 3};
  // std::list<int> std_test_src = {8, 7, 2, 3, 4, 4};
  // std::list<char> std_test_dest = {'a', 'b', 'c', 'd', 'e'};
  // std::list<char> std_test_src = {'Z', 'Y', 'X'};
  // std::list<std::string> std_test_dest = {"sus", "amogus", "ABOBA", "sus"};
  // std::list<std::string> std_test_src = {"sugoma", "BAOBAB", "same"};

  s21_test_dest.merge(s21_test_src);
  std_test_dest.merge(std_test_src);

  s21_test_dest.print();  // s21
  for (const auto& value : std_test_dest) {  // for std
    std::cout << value << " ";
  }
  std::cout << std::endl;
}
