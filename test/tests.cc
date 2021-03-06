#include <iostream>
#include "gtest/gtest.h"
#include "../src/main.cpp"

TEST(MainCase, MajorityTest) {
    int expectedNumber = 42;
    std::vector<int> fixtureVector { 1, 2, 3, 42, 42, 42, 42 };

    Solution *solution = new Solution();

    EXPECT_EQ(expectedNumber, solution->majorityElement(fixtureVector));
}
 
GTEST_API_ int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv); 
    return RUN_ALL_TESTS();
}
