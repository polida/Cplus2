#include "Vehicle.h"

template <typename T>
class Car : public Vehicle<T> {
public:
    Car(T engineSize, int seats);

    void print() const override;
    T computeMaxSpeed() const override;

private:
    T engineSize;
    int seats;
};

#include "Car.tpp"