#include "Vehicle.h"

template <typename T>
Truck<T>::Truck(T enginePower, T cargoWeight) : enginePower(enginePower), cargoWeight(cargoWeight) {}

template <typename T>
void Truck<T>::print() const {
    std::cout << "Truck with engine power: " << enginePower << " and cargo weight: " << cargoWeight << std::endl;
}

template <typename T>
T Truck<T>::computeMaxSpeed() const {
    return enginePower / (cargoWeight * 0.1);
}