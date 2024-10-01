//
// Created by dpolisensky on 10/1/2024.
//
#include <gtest/gtest.h>
#include <SimpleMath.h>

TEST(SimpleMath, add) {
    EXPECT_EQ(SimpleMath::add(4, 2), 6);
}

TEST(SimpleMath, factorial) {
    EXPECT_EQ(SimpleMath::factorial(4), 24);
}

TEST (SimpleMath, multiply) {
    EXPECT_EQ(SimpleMath::multiply(4, 2), 8);
}

TEST (SimpleMath, divide) {
    EXPECT_EQ(SimpleMath::divide(4, 2), 2);
}

TEST (SimpleMath, fibonacci) {
    EXPECT_EQ(SimpleMath::fibonacci(4), 3);
}

TEST (SimpleMath, PhytagorC) {
    EXPECT_EQ(SimpleMath::PhytagorC(3, 4), 5);
}