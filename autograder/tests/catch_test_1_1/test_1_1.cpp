//
// Created by rudri on 9/12/2020.
//
#include "catch.hpp"
#include "redirect_io.h"
#include "P1.h"
using namespace std;

static void test_1_1() {
  sudoku::table<int, 3> st
  = {
      1, 2, 3, 1, 2, 3, 1, 2, 3,
      4, 5, 6, 4, 5, 6, 4, 5, 6,
      7, 8, 9, 7, 8, 9, 7, 8, 9,
      1, 2, 3, 1, 2, 3, 1, 2, 3,
      4, 5, 6, 4, 5, 6, 4, 5, 6,
      7, 8, 9, 7, 8, 9, 7, 8, 9,
      1, 2, 3, 1, 2, 3, 1, 2, 3,
      4, 5, 6, 4, 5, 6, 4, 5, 6,
      7, 8, 9, 7, 8, 9, 7, 8, 9
  };
  cout << st;
}

TEST_CASE("Question #1.1") {
    execute_test("test_1_1.in", test_1_1);
}