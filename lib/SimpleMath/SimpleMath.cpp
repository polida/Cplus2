//
// Created by dpolisensky on 10/1/2024.
//
#include <valarray>
#include "SimpleMath.h"

namespace SimpleMath {

    int add(int a, int b) {
        return a + b;
    }

    double factorial(int a) {
        if (a == 0) {
            return 1;
        }
        return a * factorial(a - 1);
    }

    double multiply(int a, int b) {
        return a * b;
    }

    double divide(int a, int b) {
        return a / b;
    }

    double fibonacci(int a) {
        if (a == 0) {
            return 0;
        }
        if (a == 1) {
            return 1;
        }
        return fibonacci(a - 1) + fibonacci(a - 2);
    }

    double PhytagorC(int a, int b) {
        return sqrt(a * a + b * b);
    }
}