//
// Created by rudri on 9/12/2020.
//
#include "catch.hpp"
#include "redirect_io.h"
#include "P2.h"
#include <vector>
#include <list>
#include <deque>
using namespace std;

static void test_2_2() {
  std::vector<int> v1 = {2, 3, 4, 9};
  std::list<int> l1 = {10, 15, 20, 25};
  std::deque<int> d1 = {0, 1};
  
  auto [median, ordered_data] = find_median_of_concatenated(v1, l1, d1);
  std::vector<int> v2 = ordered_data;
  std::cout << median << std::endl;
  for (const auto& item: ordered_data) std::cout << item << " ";
  std::cout << std::endl;
}

TEST_CASE("Question #2.2") {
    execute_test("test_2_2.in", test_2_2);
}