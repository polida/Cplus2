#include <gtest/gtest.h>
#include <Timec.h>

TEST(TimeTest, AddMinutes) {
Timec time1(2024, 12, 11, 7, 30);
time1.addMinutes(30);
std::ostringstream oss1;
oss1 << time1;
EXPECT_EQ(oss1.str(), "2024-12-11 08:00");

Timec time2(2024, 12, 11, 23, 40);
time2.addMinutes(40);
std::ostringstream oss2;
oss2 << time2;
EXPECT_EQ(oss2.str(), "2024-12-12 00:20");
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}