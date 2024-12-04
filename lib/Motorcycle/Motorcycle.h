#pragma once

template <typename T>
class Motorcycle : public Vehicle<T> {
public:
    Motorcycle(T aerodynamics, int type);

    void print() const override;
    T computeMaxSpeed() const override;

private:
    T aerodynamics;
    int type;
};

#include "Motorcycle.tpp"