//
// Created by Leonardo Camara on 5/7/17.
//

#include "gtest/gtest.h"
#include "../src/sample.h"

TEST(basic_check, test_eq) {
    Sample s;
    EXPECT_EQ(s.get_int(), 10);
}