//
// Created by rudri on 9/12/2020.
//
#include "catch.hpp"
#include "redirect_io.h"
#include "P2.h"
#include <deque>
using namespace std;

static void test_2_4() {
  std::deque<float> d1 = {2};
  
  auto [median, ordered_data] = find_median_of_concatenated(d1);
  std::cout << median << std::endl;
  for (const auto& item: ordered_data) std::cout << item << " ";
  std::cout << std::endl;
}

TEST_CASE("Question #2.4") {
    execute_test("test_2_4.in", test_2_4);
}