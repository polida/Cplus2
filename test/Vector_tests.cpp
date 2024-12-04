//
// Created by dpolisensky on 10/1/2024.
//
#include <gtest/gtest.h>
#include <Math.h>

TEST(Vector, add) {
    EXPECT_EQ(Math::add(4, 2), 6);
}