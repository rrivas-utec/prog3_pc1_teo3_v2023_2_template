//
// Created by rudri on 9/12/2020.
//
#include "catch.hpp"
#include "redirect_io.h"
#include "P1.h"
using namespace std;

static void test_1_2() {
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
  cout << boolalpha << st.is_valid() << endl;

  sudoku::table<int, 3> st2
      = {
          1, 2, 3, 4, 5, 6, 7, 8, 9,
          4, 5, 6, 7, 8, 9, 1, 2, 3,
          7, 8, 9, 1, 2, 3, 4, 5, 6,
          2, 3, 4, 5, 6, 7, 8, 9, 1,
          5, 6, 7, 8, 9, 1, 2, 3, 4,
          8, 9, 1, 2, 3, 4, 5, 6, 7,
          3, 4, 5, 6, 7, 8, 9, 1, 2,
          6, 7, 8, 9, 1, 2, 3, 4, 5,
          9, 1, 2, 3, 4, 5, 6, 7, 8
      };
  cout << boolalpha << st2.is_valid() << endl;
}

TEST_CASE("Question #1.2") {
    execute_test("test_1_2.in", test_1_2);
}