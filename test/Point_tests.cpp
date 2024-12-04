//
// Created by dpolisensky on 10/1/2024.
//
#include <gtest/gtest.h>
#include <Math.h>
TEST(PointTest, AddVector) {
        Motocycle<int> p(5);
        Vector<int> v(3);
        Motocycle<int> result = p + v;
        EXPECT_EQ(result.getX(), 8);
    }
    TEST(PointTest, SubtractPoint) {
    Motocycle<int> p1(10);
    Motocycle<int> p2(4);
    Vector<int> result = p1 - p2;
    EXPECT_EQ(result.getX(), 6);
}
