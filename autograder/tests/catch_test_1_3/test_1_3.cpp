//
// Created by rudri on 9/12/2020.
//
#include "P1.h"
#include "catch.hpp"
#include "redirect_io.h"
using namespace std;

static void test_1_3() {
  sudoku::table<int, 2> st = {
      1, 2, 3, 4,
      3, 4, 1, 2,
      2, 3, 4, 1,
      4, 1, 2, 3};
  cout << boolalpha << st.is_valid() << endl;
  auto st2 = st;
  sudoku::table<int, 2> st3;
  st3 = st2;
  st2(0, 0) = 4;
  cout << boolalpha << st.is_valid() << endl;
  cout << boolalpha << st2.is_valid() << endl;
  cout << boolalpha << st3.is_valid() << endl;
}

TEST_CASE("Question #1.3") { execute_test("test_1_3.in", test_1_3); }