//
// Created by rudri on 9/12/2020.
//
#include "catch.hpp"
#include "redirect_io.h"
#include "P2.h"
#include <vector>
using namespace std;

static void test_2_1() {
  std::vector<int> v1 = {2, 3, 5};
  std::vector<int> v2 = {10, 15, 20, 25};
  std::vector<int> v3 = {0, 1};
  
  auto [median, ordered_data] = find_median_of_concatenated(v1, v2, v3);
  std::cout << median << std::endl;
  for (const auto& item: ordered_data) std::cout << item << " ";
  std::cout << std::endl;
}

TEST_CASE("Question #2.1") {
    execute_test("test_2_1.in", test_2_1);
}