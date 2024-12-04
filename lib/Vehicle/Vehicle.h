#pragma once
#include <iostream>
#include <cmath>

template <typename T>
class Vehicle {
public:
    virtual ~Vehicle() = default;

    virtual void print() const = 0;
    virtual T computeMaxSpeed() const = 0;

    T estimateTravelTime(T distance) const {
        T maxSpeed = computeMaxSpeed();
        return distance / maxSpeed;
    }
};