#include "Vehicle.h"

template <typename T>
Motorcycle<T>::Motorcycle(T aerodynamics, int type) : aerodynamics(aerodynamics), type(type) {}

template <typename T>
void Motorcycle<T>::print() const {
    std::cout << "Motorcycle with aerodynamics: " << aerodynamics << ", type: " << (type == 0 ? "sport" : "touring") << std::endl;
}

template <typename T>
T Motorcycle<T>::computeMaxSpeed() const {
    if (type == 0) { // sport
        return 200 / aerodynamics;
    } else { // touring
        return 150 / aerodynamics;
    }
}