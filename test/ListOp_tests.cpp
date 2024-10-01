//
// Created by dpolisensky on 10/1/2024.
//
#include <gtest/gtest.h>
#include <list>
#include <ListOp.h>

TEST (ListOp, sumList) {
    std::list<int> lst = {1, 2, 3, 4, 5};
    EXPECT_EQ(15, ListOp::sumList(lst));
}