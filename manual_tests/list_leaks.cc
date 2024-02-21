#include <list>
#include "../s21_containers/s21_list.h"

int main() {
  s21::list<int> test = {1, 2, 3, 4, 5};//AddingToBeginCorrectInt
  test.insert(test.begin(), 10);
  test.print();

  // s21::list<char> test = {'a', 'b', 'c', 'd', 'e'};//AddingToBeginCorrectChar
  // test.insert(test.begin(), 'Z');

  // s21::list<int> s21_test = {1, 2, 3, 4, 5};//AddingToBeginCompareInt
  // s21_test.insert(s21_test.begin(), 10);

  // s21::list<char> s21_test = {'a', 'b', 'c', 'd', 'e'};//AddingToBeginCompareChar
  // s21_test.insert(s21_test.begin(), 'Z');

  // s21::list<int> test = {1, 2, 3, 4, 5};//AddingToEndCorrectInt
  // test.insert(test.end(), 10);

  // s21::list<char> test = {'a', 'b', 'c', 'd', 'e'};//AddingToEndCorrectChar
  // test.insert(test.end(), 'Z');

  // s21::list<int> s21_test = {1, 2, 3, 4, 5};//AddingToEndCompareInt
  // s21_test.insert(s21_test.end(), 10);

  // s21::list<char> s21_test = {'a', 'b', 'c', 'd', 'e'};//AddingToEndCompareChar
  // s21_test.insert(s21_test.end(), 'Z');

  // s21::list<int> test;//AddingToEmptyCorrectInt
  // test.insert(test.begin(), 10);//SOLVED

  // s21::list<char> test;//AddingToEmptyCorrectChar
  // test.insert(test.begin(), 'A');//SOLVED

  // s21::list<int> s21_test;//AddingToEmptyCompareInt
  // s21_test.insert(s21_test.begin(), 10);//SOLVED

  // s21::list<char> s21_test;//AddingToEmptyCompareChar
  // s21_test.insert(s21_test.begin(), 'A');//SOLVED

  // s21::list<char> dest = {'a', 'b', 'c', 'd', 'e'};//TwoListsCorrectChar
  // s21::list<char> src = {'Z', 'Y', 'X'};
  // dest.merge(src);

  // s21::list<std::string> test = {"amogus", "sus", "aboba"};//AddingToBeginCorrectStr
  // test.insert(test.begin(), "awoo");

  // s21::list<std::string> s21_test = {"amogus", "sus", "aboba"};//AddingToBeginCompareStr
  // s21_test.insert(s21_test.begin(), "awoo");

  // s21::list<std::string> test = {"amogus", "sus", "aboba"};//AddingToEndCorrectStr
  // test.insert(test.end(), "awoo");

  // s21::list<std::string> s21_test = {"amogus", "sus", "aboba"};//AddingToEndCompareStr
  // s21_test.insert(s21_test.end(), "awoo");

  // s21::list<std::string> test;//AddingToEmptyCorrectStr
  // test.insert(test.begin(), "test");//SOLVED

  // s21::list<std::string> s21_test;//AddingToEmptyCompareStr
  // s21_test.insert(s21_test.begin(), "test");//SOLVED

  // s21::list<int> dest = {1, 2, 3, 4, 5};//TwoListsCorrectInt
  // s21::list<int> src = {30, 20, 10};
  // dest.merge(src);
  
  // s21::list<int> s21_dest = {1, 2, 3, 4, 5};//TwoListsCompareInt
  // s21::list<int> s21_src = {30, 20, 10};
  // s21_dest.merge(s21_src);

  // s21::list<std::string> dest = {"sus", "amogus", "ABOBA", "sus"};//TwoListsCorrectStr
  // s21::list<std::string> src = {"sugoma", "BAOBAB", "yeet"};
  // dest.merge(src);

  // s21::list<char> s21_dest = {'a', 'b', 'c', 'd', 'e'};//TwoListsCompareChar
  // s21::list<char> s21_src = {'Z', 'Y', 'X'};
  // s21_dest.merge(s21_src);

  // s21::list<std::string> s21_dest = {"sus", "amogus", "ABOBA", "sus"};//TwoListsCompareStr
  // s21::list<std::string> s21_src = {"sugoma", "BAOBAB", "yeet"};
  // s21_dest.merge(s21_src);
}
