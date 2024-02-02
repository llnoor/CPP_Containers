#include "team_map.h"

TEST(Map, Constructor1) {
  std::map<int, char> std_temp{{10, 'a'}, {20, 'b'}, {30, 'c'}};
  team::map<int, char> team_temp{{10, 'a'}, {20, 'b'}, {30, 'c'}};
  for (int i = 0; i <= 2; i++) EXPECT_EQ(std_temp[i], team_temp[i]);
  EXPECT_EQ(std_temp.size(), team_temp.size());
  std::map<int, char> std_empty_temp{};
  std::map<int, char> team_empty_temp{};
  EXPECT_EQ(std_empty_temp.size(), team_empty_temp.size());
}

TEST(Map, Constructor2) {
  std::map<int, char> std_copy_temp{{10, 'a'}, {20, 'b'}, {30, 'c'}};
  std::map<int, char> std_temp = std_copy_temp;
  team::map<int, char> team_copy_temp{{10, 'a'}, {20, 'b'}, {30, 'c'}};
  team::map<int, char> team_temp = team_copy_temp;
  for (int i = 0; i <= 2; i++) EXPECT_EQ(std_temp[i], team_temp[i]);
  EXPECT_EQ(std_temp.size(), team_temp.size());
}

TEST(Map, Constructor3) {
  team::map<double, char> team_temp;
  team_temp[0.12] = 'g';
  std::map<double, char> std_temp;
  std_temp[0.12] = 'g';
  EXPECT_EQ(std_temp[0.12], team_temp[0.12]);
  EXPECT_EQ(std_temp.size(), team_temp.size());
}

TEST(Map, Constructor4) {
  std::map<int, char> std_moving_temp{{10, 'a'}, {20, 'b'}, {30, 'c'}};
  std::map<int, char> std_temp = std::move(std_moving_temp);
  team::map<int, char> team_moving_temp{{10, 'a'}, {20, 'b'}, {30, 'c'}};
  team::map<int, char> team_temp = std::move(team_moving_temp);
  EXPECT_EQ(std_moving_temp.size(), team_moving_temp.size());
  EXPECT_EQ(std_temp.size(), team_temp.size());
  std::map<int, char> std_null_temp;
  std::map<int, char> std_temp_2 = std::move(std_moving_temp);
  team::map<int, char> team_null_temp;
  team::map<int, char> team_temp_2 = std::move(team_moving_temp);
  EXPECT_EQ(std_null_temp.size(), team_null_temp.size());
  EXPECT_EQ(std_temp_2.size(), team_temp_2.size());
}

TEST(Map, Constructor5) {
  std::map<int, char> std_temp = {{10, 'a'}, {20, 'b'}, {30, 'c'}};
  team::map<int, char> team_temp = {{10, 'a'}, {20, 'b'}, {30, 'c'}};
  std::map<int, char> std_temp_2 = {{87, 'f'}, {65, 'g'}, {45, 'h'}};
  team::map<int, char> team_temp_2 = {{87, 'f'}, {65, 'g'}, {45, 'h'}};
  std_temp_2 = std::move(std_temp);
  team_temp_2 = std::move(team_temp);
  for (int i = 0; i <= 2; i++) EXPECT_EQ(std_temp_2[i], team_temp_2[i]);
}

TEST(Map, Constructor6) {
  team::map<int, int> temp1 = {
      {34, 543}, {12, 202}, {34, 3543}, {56, 454}, {76, 525}};
  std::map<int, int> temp2 = {
      {34, 543}, {12, 202}, {34, 3543}, {56, 454}, {76, 525}};
  auto temp11 = std::move(temp1);
  auto temp22 = std::move(temp2);
  auto it1 = temp11.begin();
  for (auto it2 = temp22.begin(); it2 != temp22.end(); ++it2, ++it1)
    EXPECT_EQ((*it1).second, (*it2).second);
  EXPECT_EQ(temp1.size(), temp2.size());
  EXPECT_EQ(temp11.size(), temp22.size());
}

TEST(Map, Constructor7) {
  std::map<int, char> std_temp = {{10, 'a'}, {20, 'b'}, {30, 'c'}};
  team::map<int, char> team_temp = {{10, 'a'}, {20, 'b'}, {30, 'c'}};
  for (int i = 0; i <= 2; i++) EXPECT_EQ(std_temp[i], team_temp[i]);
  std::pair<int, char> p1{1, 'b'};
  std::map<std::pair<int, char>, std::string> std_temp_2{{p1, "stirng"}};
  team::map<std::pair<int, char>, std::string> team_temp_2{{p1, "stirng"}};
  EXPECT_EQ(std_temp_2[p1], team_temp_2[p1]);
}

TEST(Map, Constructor8) {
  team::map<int, int> temp1 = {{0, 0}, {1, 1}, {2, 2}, {3, 3}, {3, 3}};
  std::map<int, int> temp2 = {{0, 0}, {1, 1}, {2, 2}, {3, 3}, {3, 3}};
  auto it1 = temp1.begin();
  for (auto it2 = temp2.begin(); it2 != temp2.end(); ++it1, ++it2)
    EXPECT_EQ((*it1).second, (*it2).second);
  it1 = temp1.begin();
  for (auto it2 = temp2.begin(); it2 != temp2.end(); ++it1, ++it2)
    EXPECT_EQ((*it1).first, (*it2).first);
  EXPECT_EQ(temp1.size(), temp2.size());
}

TEST(Map, Constructor9) {
  team::map<int, int> temp1;
  std::map<int, int> temp2;
  EXPECT_EQ(temp1.size(), temp2.size());
  temp1.insert({3, 3});
  temp2.insert({3, 3});
  EXPECT_EQ(temp1.size(), temp2.size());
}

TEST(Map, Constructor10) {
  team::map<int, int> temp1 = {
      {34, 543}, {12, 202}, {34, 3543}, {56, 454}, {76, 525}};
  std::map<int, int> temp2 = {
      {34, 543}, {12, 202}, {34, 3543}, {56, 454}, {76, 525}};
  auto temp11 = temp1;
  auto temp22 = temp2;
  auto it1 = temp11.begin();
  for (auto it2 = temp22.begin(); it2 != temp22.end(); ++it2, ++it1)
    EXPECT_EQ((*it1).second, (*it2).second);
  EXPECT_EQ(temp1.size(), temp2.size());
  EXPECT_EQ(temp11.size(), temp22.size());
}

TEST(Map, At1) {
  team::map<int, int> temp1 = {
      {45, 64}, {34, 543}, {123, 433}, {42, 44}, {54, 235}};
  std::map<int, int> temp2 = {
      {45, 64}, {34, 543}, {123, 433}, {42, 44}, {54, 235}};
  EXPECT_EQ(temp1.at(45), temp2.at(45));
}

TEST(Map, At2) {
  team::map<int, int> temp1 = {
      {45, 64}, {46, 543}, {47, 433}, {48, 44}, {49, 235}};
  std::map<int, int> temp2 = {
      {45, 64}, {46, 543}, {47, 433}, {48, 44}, {49, 235}};
  EXPECT_EQ(temp1.at(49), temp2.at(49));
}

TEST(Map, At3) {
  std::map<int, char> std_temp = {{1, 'a'}, {2, 'b'}, {3, 'c'}};
  team::map<int, char> team_temp = {{1, 'a'}, {2, 'b'}, {3, 'c'}};
  for (int i = 1; i <= 3; i++) EXPECT_EQ(std_temp.at(i), team_temp.at(i));
  std::pair<int, char> p1{20, 'r'};
  std::map<std::pair<int, char>, std::string> std_temp_2{{p1, "stirng"}};
  team::map<std::pair<int, char>, std::string> team_temp_2{{p1, "stirng"}};
  EXPECT_EQ(std_temp_2.at(p1), team_temp_2.at(p1));
}

TEST(Map, Begin1) {
  std::map<int, char> std_temp = {{10, 'a'}, {20, 'b'}, {30, 'c'}};
  team::map<int, char> team_temp = {{10, 'a'}, {20, 'b'}, {30, 'c'}};
  auto std_it = std_temp.begin();
  auto team_it = team_temp.begin();
  EXPECT_EQ((*std_it).first, (*team_it).first);
  EXPECT_EQ((*std_it).second, (*team_it).second);
}

TEST(Map, Begin2) {
  team::map<int, int> temp1 = {
      {34, 543}, {12, 202}, {34, 3543}, {56, 454}, {76, 525}};
  std::map<int, int> temp2 = {
      {34, 543}, {12, 202}, {34, 3543}, {56, 454}, {76, 525}};
  auto it1 = temp1.begin();
  auto it2 = temp2.begin();
  EXPECT_EQ((*it1).second, (*it2).second);
}

TEST(Map, End) {
  std::map<int, char> std_temp = {{10, 'a'}, {20, 'b'}, {30, 'c'}};
  team::map<int, char> team_temp = {{10, 'a'}, {20, 'b'}, {30, 'c'}};
  auto std_it = --std_temp.end();
  auto team_it = team_temp.rbegin();
  EXPECT_EQ((*std_it).first, (*team_it).first);
  EXPECT_EQ((*std_it).second, (*team_it).second);
}

TEST(Map, Empty) {
  std::map<int, char> std_temp = {{10, 'a'}, {20, 'b'}, {30, 'c'}};
  team::map<int, char> team_temp = {{10, 'a'}, {20, 'b'}, {30, 'c'}};
  EXPECT_EQ(std_temp.empty(), team_temp.empty());

  std::map<int, char> std_empty_temp{};
  std::map<int, char> team_empty_temp{};
  EXPECT_EQ(std_empty_temp.empty(), team_empty_temp.empty());
}

TEST(Map, Size1) {
  std::map<int, char> std_temp = {{10, 'a'}, {20, 'b'}, {30, 'c'}};
  team::map<int, char> team_temp = {{10, 'a'}, {20, 'b'}, {30, 'c'}};
  EXPECT_EQ(std_temp.size(), team_temp.size());

  std::map<int, char> std_empty_temp{};
  std::map<int, char> team_empty_temp{};
  EXPECT_EQ(std_empty_temp.size(), team_empty_temp.size());
}

TEST(Map, Size2) {
  std::map<int, char> std_empty_temp{};
  std::map<int, char> team_empty_temp{};
  EXPECT_EQ(std_empty_temp.max_size(), team_empty_temp.max_size());
}

TEST(Map, Size3) {
  team::map<int, int> temp1;
  std::map<int, int> temp2;
  std::pair<int, int> temp_pair = {2, 2};
  temp1.insert(temp_pair);
  temp2.insert(temp_pair);
  EXPECT_EQ(temp1.size(), temp2.size());
}

TEST(Map, Size4) {
  team::map<int, int> temp1 = {
      {34, 543}, {12, 202}, {34, 3543}, {56, 454}, {76, 525}};
  std::map<int, int> temp2 = {
      {34, 543}, {12, 202}, {34, 3543}, {56, 454}, {76, 525}};
  EXPECT_EQ(temp1.size(), temp2.size());
}

TEST(Map, Size5) {
  team::map<int, int> temp1 = {
      {34, 543}, {12, 202}, {34, 3543}, {56, 454}, {76, 525}};
  std::map<int, int> temp2 = {
      {34, 543}, {12, 202}, {34, 3543}, {56, 454}, {76, 525}};
  temp1.clear();
  temp2.clear();
  EXPECT_EQ(temp1.size(), temp2.size());
}

TEST(Map, Empty1) {
  team::map<int, int> temp1 = {
      {34, 543}, {12, 202}, {34, 3543}, {56, 454}, {76, 525}};
  std::map<int, int> temp2 = {
      {34, 543}, {12, 202}, {34, 3543}, {56, 454}, {76, 525}};
  EXPECT_EQ(temp1.empty(), temp2.empty());
}

TEST(Map, Empty2) {
  team::map<int, int> temp1 = {
      {34, 543}, {12, 202}, {34, 3543}, {56, 454}, {76, 525}};
  std::map<int, int> temp2 = {
      {34, 543}, {12, 202}, {34, 3543}, {56, 454}, {76, 525}};
  temp1.clear();
  temp2.clear();
  EXPECT_EQ(temp1.empty(), temp2.empty());
}

TEST(Map, Insert1) {
  std::map<int, char> std_temp = {{10, 'a'}, {20, 'b'}, {30, 'c'}};
  team::map<int, char> team_temp = {{10, 'a'}, {20, 'b'}, {30, 'c'}};

  auto std_insert_pair = std_temp.insert({4, 'f'});
  auto team_insert_pair = team_temp.insert({4, 'f'});
  EXPECT_EQ(std_insert_pair.first->first, (*(team_insert_pair.first)).first);
  EXPECT_EQ(std_insert_pair.first->second, (*(team_insert_pair.first)).second);
  EXPECT_EQ(std_insert_pair.second, team_insert_pair.second);
  EXPECT_EQ(std_temp[4], team_temp[4]);
}

TEST(Map, Insert2) {
  std::map<int, char> std_temp = {{10, 'a'}, {20, 'b'}, {30, 'c'}};
  team::map<int, char> team_temp = {{10, 'a'}, {20, 'b'}, {30, 'c'}};
  auto std_insert_pair = std_temp.insert({5, 'f'});
  auto team_insert_pair = team_temp.insert({5, 'f'});
  EXPECT_EQ(std_insert_pair.first->first, (*(team_insert_pair.first)).first);
  EXPECT_EQ(std_insert_pair.first->second, (*(team_insert_pair.first)).second);
  EXPECT_EQ(std_insert_pair.second, team_insert_pair.second);
  EXPECT_EQ(std_temp[4], team_temp[4]);
}

TEST(Map, Insert3) {
  team::map<int, char> team_temp = {{0, 'q'}, {1, 'w'}, {2, 'e'}};
  auto team_insert_pair = team_temp.insert_or_assign(4, 'y');
  EXPECT_EQ(true, team_insert_pair.second);
  EXPECT_EQ('y', team_temp[4]);
  team_insert_pair = team_temp.insert_or_assign(0, 'm');
  EXPECT_EQ(false, team_insert_pair.second);
  EXPECT_EQ('m', team_temp[0]);
}

TEST(Map, Insert4) {
  team::map<int, int> temp1 = {
      {34, 543}, {12, 202}, {34, 3543}, {56, 454}, {76, 525}};
  std::map<int, int> temp2 = {
      {34, 543}, {12, 202}, {34, 3543}, {56, 454}, {76, 525}};
  std::pair<int, int> pair_temp = {4, 2};
  EXPECT_EQ(temp1.insert(pair_temp).second, temp2.insert(pair_temp).second);
  EXPECT_EQ(temp1.size(), temp2.size());
}

TEST(Map, Insert5) {
  team::map<int, int> temp1;
  std::map<int, int> temp2;
  EXPECT_EQ(temp1.empty(), temp2.empty());
  std::pair<int, int> pair_temp = {3, 1};
  EXPECT_EQ(temp1.insert(pair_temp).second, temp2.insert(pair_temp).second);
  EXPECT_EQ(temp1.empty(), temp2.empty());
  EXPECT_EQ(temp1.size(), temp2.size());
}

TEST(Map, Clear1) {
  team::map<int, int> temp1 = {
      {34, 543}, {12, 202}, {34, 3543}, {56, 454}, {76, 525}};
  std::map<int, int> temp2 = {
      {34, 543}, {12, 202}, {34, 3543}, {56, 454}, {76, 525}};
  temp1.clear();
  temp2.clear();
  EXPECT_EQ(temp1.size(), temp2.size());
  EXPECT_EQ(temp1.empty(), temp2.empty());
}

TEST(Map, Clear2) {
  team::map<int, int> temp1;
  std::map<int, int> temp2;
  temp1.clear();
  temp2.clear();
  EXPECT_EQ(temp1.size(), temp2.size());
  EXPECT_EQ(temp1.empty(), temp2.empty());
}

TEST(Map, Clear3) {
  team::map<int, int> temp1 = {
      {34, 543}, {12, 202}, {34, 3543}, {56, 454}, {76, 525}};
  std::map<int, int> temp2 = {
      {34, 543}, {12, 202}, {34, 3543}, {56, 454}, {76, 525}};
  temp1.clear();
  temp2.clear();
  EXPECT_EQ(temp1.size(), temp2.size());
  EXPECT_EQ(temp1.empty(), temp2.empty());
  temp1.clear();
  temp2.clear();
  EXPECT_EQ(temp1.size(), temp2.size());
  EXPECT_EQ(temp1.empty(), temp2.empty());
}

TEST(Map, Clear4) {
  std::map<int, char> std_temp = {{10, 'a'}, {20, 'b'}, {30, 'c'}};
  team::map<int, char> team_temp = {{10, 'a'}, {20, 'b'}, {30, 'c'}};
  std_temp.clear();
  team_temp.clear();
  std::map<int, char> std_empty_temp{};
  std::map<int, char> team_empty_temp{};
  EXPECT_EQ(std_temp.size(), std_empty_temp.size());
  EXPECT_EQ(team_temp.size(), team_empty_temp.size());
}

TEST(Map, Erase1) {
  team::map<int, int> temp1 = {
      {34, 543}, {12, 202}, {34, 3543}, {56, 454}, {76, 525}};
  std::map<int, int> temp2 = {
      {34, 543}, {12, 202}, {34, 3543}, {56, 454}, {76, 525}};
  EXPECT_EQ(temp1.size(), temp2.size());
  temp1.erase(temp1.begin());
  temp2.erase(temp2.begin());
  EXPECT_EQ(temp1.size(), temp2.size());
}

TEST(Map, Erase2) {
  team::map<int, int> temp1 = {
      {34, 543}, {12, 202}, {34, 3543}, {56, 454}, {76, 525}};
  std::map<int, int> temp2 = {
      {34, 543}, {12, 202}, {34, 3543}, {56, 454}, {76, 525}};
  temp1.erase(temp1.begin());
  temp2.erase(temp2.begin());
  auto it1 = temp1.begin();
  auto it2 = temp2.begin();
  EXPECT_EQ(temp1.size(), temp2.size());
  EXPECT_EQ((*it1).second, (*it2).second);
}

TEST(Map, Erase3) {
  std::map<int, char> std_temp = {{10, 'a'}, {20, 'b'}, {30, 'c'}};
  team::map<int, char> team_temp = {{10, 'a'}, {20, 'b'}, {30, 'c'}};
  auto std_it = std_temp.begin();
  auto team_it = team_temp.begin();
  ++std_it;
  ++team_it;
  std_temp.erase(std_it);
  team_temp.erase(team_it);
  std_it = std_temp.begin();
  team_it = team_temp.begin();
  for (; std_it != std_temp.end(); ++std_it, ++team_it) {
    EXPECT_EQ((*std_it).first, (*team_it).first);
    EXPECT_EQ((*std_it).second, (*team_it).second);
  }
}

TEST(Map, Swap1) {
  std::map<int, char> std_temp = {{10, 'a'}, {20, 'b'}, {30, 'c'}};
  team::map<int, char> team_temp = {{10, 'a'}, {20, 'b'}, {30, 'c'}};
  std::map<int, char> std_temp_2 = {{87, 'f'}, {65, 'g'}, {45, 'h'}};
  team::map<int, char> team_temp_2 = {{87, 'f'}, {65, 'g'}, {45, 'h'}};
  std_temp.swap(std_temp_2);
  team_temp.swap(team_temp_2);
  for (int i = 0; i <= 2; i++) EXPECT_EQ(std_temp_2[i], team_temp_2[i]);
  for (int i = 26; i >= 24; i--) EXPECT_EQ(std_temp[i], team_temp[i]);
}

TEST(Map, Swap2) {
  team::map<int, int> temp1 = {
      {34, 543}, {12, 202}, {34, 3543}, {56, 454}, {76, 525}};
  std::map<int, int> temp2 = {
      {34, 543}, {12, 202}, {34, 3543}, {56, 454}, {76, 525}};
  team::map<int, int> temp11;
  std::map<int, int> temp22;
  temp1.swap(temp11);
  temp2.swap(temp22);
  EXPECT_EQ(temp1.size(), temp2.size());
  EXPECT_EQ(temp11.size(), temp22.size());
  auto it1 = temp11.begin();
  for (auto it2 = temp22.begin(); it2 != temp22.end(); ++it1, ++it2)
    EXPECT_EQ((*it1).second, (*it2).second);
}

TEST(Map, Swap3) {
  team::map<int, int> temp1 = {
      {34, 543}, {12, 202}, {34, 3543}, {56, 454}, {76, 525}};
  std::map<int, int> temp2 = {
      {34, 543}, {12, 202}, {34, 3543}, {56, 454}, {76, 525}};
  team::map<int, int> temp11 = {{12, 132}, {432, 43}, {654, 34}, {643, 5543}};
  std::map<int, int> temp22 = {{12, 132}, {432, 43}, {654, 34}, {643, 5543}};
  EXPECT_EQ(temp1.size(), temp2.size());
  temp1.swap(temp11);
  temp2.swap(temp22);
  EXPECT_EQ(temp1.size(), temp2.size());
  EXPECT_EQ(temp11.size(), temp22.size());
  auto it1 = temp11.begin();
  for (auto it2 = temp22.begin(); it2 != temp22.end(); ++it1, ++it2)
    EXPECT_EQ((*it1).second, (*it2).second);
}

TEST(Map, Merge1) {
  std::map<int, char> std_temp = {{10, 'a'}, {20, 'b'}, {30, 'c'}};
  team::map<int, char> team_temp = {{10, 'a'}, {20, 'b'}, {30, 'c'}};
  std::map<int, char> std_temp_2 = {{87, 'f'}, {65, 'g'}, {45, 'h'}};
  team::map<int, char> team_temp_2 = {{87, 'f'}, {65, 'g'}, {45, 'h'}};
  std_temp.merge(std_temp_2);
  team_temp.merge(team_temp_2);
  auto std_it = std_temp.begin();
  auto team_it = team_temp.begin();
  for (; std_it != std_temp.end(); ++std_it, ++team_it) {
    EXPECT_EQ((*std_it).first, (*team_it).first);
    EXPECT_EQ((*std_it).second, (*team_it).second);
  }
}

TEST(Map, Merge2) {
  team::map<int, int> temp1 = {
      {34, 543}, {12, 202}, {34, 3543}, {56, 454}, {76, 525}};
  std::map<int, int> temp2 = {
      {34, 543}, {12, 202}, {34, 3543}, {56, 454}, {76, 525}};
  team::map<int, int> temp11 = {
      {34, 543}, {12, 202}, {34, 3543}, {56, 454}, {76, 525}};
  std::map<int, int> temp22 = {
      {34, 543}, {12, 202}, {34, 3543}, {56, 454}, {76, 525}};
  temp1.merge(temp11);
  temp2.merge(temp22);
  EXPECT_EQ(temp1.size(), temp2.size());
  auto it1 = temp1.begin();
  for (auto it2 = temp2.begin(); it2 != temp2.end(); ++it1, ++it2)
    EXPECT_EQ((*it1).second, (*it2).second);
}

TEST(Map, Contains1) {
  std::map<int, char> std_temp = {{10, 'a'}, {20, 'b'}, {30, 'c'}};
  team::map<int, char> team_temp = {{10, 'a'}, {20, 'b'}, {30, 'c'}};
  EXPECT_EQ(true, team_temp.contains(10));
  EXPECT_EQ(false, team_temp.contains(35));
}

TEST(Map, Contains2) {
  team::map<int, int> temp1 = {
      {34, 543}, {12, 202}, {34, 3543}, {56, 454}, {76, 525}};
  EXPECT_EQ(temp1.contains(12), true);
  EXPECT_EQ(temp1.contains(34), true);
}

TEST(Map, Emplace) {
  team::map<std::string, int> team_map_temp = {
      {"Hydrogen", 1}, {"Helium", 2}, {"Lithium", 3}, {"Beryllium", 4}};
  std::map<std::string, int> std_map_temp = {
      {"Hydrogen", 1}, {"Helium", 2}, {"Lithium", 3}, {"Beryllium", 4}};
  EXPECT_EQ(team_map_temp.size(), std_map_temp.size());
  EXPECT_EQ(team_map_temp.empty(), std_map_temp.empty());
  auto v =
      team_map_temp.insert_many(std::pair<std::string, int>{"Phosphorous", 25},
                               std::pair<std::string, int>{"Sulfur", 17},
                               std::pair<std::string, int>{"Chlorine", 15},
                               std::pair<std::string, int>{"Chlorine", 15});
  std_map_temp.emplace("Phosphorous", 25);
  std_map_temp.emplace("Chlorine", 15);
  std_map_temp.emplace("Argon", 16);
  auto p2 = std_map_temp.emplace("Sulfur", 17);
  EXPECT_EQ((*(v[1].first)).first, (*(p2.first)).first);
  EXPECT_EQ((*(v[1].first)).second, (*(p2.first)).second);
  EXPECT_EQ(v[1].second, p2.second);

  EXPECT_EQ(team_map_temp.empty(), std_map_temp.empty());
}
