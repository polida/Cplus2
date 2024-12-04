template <typename T>
Car<T>::Car(T engineSize, int seats) : engineSize(engineSize), seats(seats) {}

template <typename T>
void Car<T>::print() const {
    std::cout << "Car with engine size: " << engineSize << "L, seats: " << seats << std::endl;
}

template <typename T>
T Car<T>::computeMaxSpeed() const {
    return engineSize * 50 - seats * 5;
}