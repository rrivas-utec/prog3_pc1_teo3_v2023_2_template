//
// Created by rudri on 9/12/2020.
//
#include "catch.hpp"
#include "redirect_io.h"
#include "P1.h"
using namespace std;

static void test_1_4() {
  sudoku::table<char, 2> st = {
      'A', 'B', 'C', 'D', 'C', 'D', 'A', 'B',
      'B', 'C', 'D', 'A', 'D', 'A', 'B', 'C',
  };
  cout << boolalpha << st.is_valid() << endl;
  st(0, 0) = 'D';
  cout << boolalpha << st.is_valid() << endl;
  for (int i = 0; i < st.cells(); ++i) {
    for (int j = 0; j < st.cells(); ++j)
      cout << setw(3) << st(i, j);
    cout << endl;
  }
}

TEST_CASE("Question #1.4") {
    execute_test("test_1_4.in", test_1_4);
}