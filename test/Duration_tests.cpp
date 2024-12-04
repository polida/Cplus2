//
// Created by dpolisensky on 11/12/2024.
//
#include <gtest/gtest.h>
#include <Vehicle.h>

TEST(DurationTest, GetMinutes) {
    Vehicle duration1(30);
    EXPECT_EQ(duration1.getMinutes(), 30);

    Vehicle duration2(90);
    EXPECT_EQ(duration2.getMinutes(), 90);
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}