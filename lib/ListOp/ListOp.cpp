//
// Created by dpolisensky on 10/1/2024.
//
#include "ListOp.h"
#include <numeric>

namespace ListOp {
    int sumList(const std::list<int>& lst) {
        return std::accumulate(lst.begin(), lst.end(), 0);
    }
}