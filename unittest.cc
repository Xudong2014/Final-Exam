#include <limits.h>
#include "gtest/gtest.h"
namespace {

TEST(Input1,test) {
  EXPECT_EQ(13, countChar("in1.txt"));
}

TEST(Input2,test) {
  EXPECT_EQ(6, countChar ("in2.txt"));
}

TEST(Input3,test) {
  EXPECT_EQ(9, countChar ("in3.txt"));
}
}


