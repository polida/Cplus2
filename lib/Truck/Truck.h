#pragma once
#include "Vehicle.h"

template <typename T>
class Truck : public Vehicle<T> {
public:
    Truck(T enginePower, T cargoWeight);

    void print() const override;
    T computeMaxSpeed() const override;

private:
    T enginePower;
    T cargoWeight;
};

#include "Truck.tpp"