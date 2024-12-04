#include <iostream>
#include <vector>
#include <memory>
#include <algorithm>
#include "Car.h"
#include "Motorcycle.h"
#include "Truck.h"

template <typename T>
T estimateTravelTime(T maxSpeed, T distance) {
    return distance / maxSpeed;
}

template <typename T>
void sortVehiclesByMaxSpeed(std::vector<std::shared_ptr<Vehicle<T>>>& vehicles, bool ascending = true) {
    std::sort(vehicles.begin(), vehicles.end(), [ascending](const std::shared_ptr<Vehicle<T>>& a, const std::shared_ptr<Vehicle<T>>& b) {
        return ascending ? a->computeMaxSpeed() < b->computeMaxSpeed() : a->computeMaxSpeed() > b->computeMaxSpeed();
    });
}
int main() {
    std::vector<std::shared_ptr<Vehicle<float>>> vehicles;

    // Adding different cars
    vehicles.push_back(std::make_shared<Car<float>>(2.0f, 4));
    vehicles.push_back(std::make_shared<Car<float>>(3.0f, 2));

    // Adding different motorcycles
    vehicles.push_back(std::make_shared<Motorcycle<float>>(0.3f, 0)); // sport
    vehicles.push_back(std::make_shared<Motorcycle<float>>(0.5f, 1)); // touring

    // Adding different trucks
    vehicles.push_back(std::make_shared<Truck<float>>(400.0f, 1000.0f));
    vehicles.push_back(std::make_shared<Truck<float>>(500.0f, 800.0f));

    float distance = 100.0f; // distance in km

    // Sort vehicles by max speed in ascending order
    sortVehiclesByMaxSpeed(vehicles, false);

    for (const auto& vehicle : vehicles) {
        vehicle->print();
        float maxSpeed = vehicle->computeMaxSpeed();
        std::cout << "Max Speed: " << maxSpeed << " km/h" << std::endl;
        std::cout << "Estimated Travel Time for 100 km: " << estimateTravelTime(maxSpeed, distance) << " hours" << std::endl;
        std::cout << "---------------------------------" << std::endl;
    }

    return 0;
}