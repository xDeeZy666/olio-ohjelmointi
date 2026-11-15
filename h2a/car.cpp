#include "car.h"
#include <iostream>

void Car::printData()
{
    std::cout << "Merkki: " << brand << ", malli: " << model
              << ", vuosi: " << yearModel << std::endl;
}

void Car::setBrand(std::string b)
{
    brand = b;
}

void Car::setModel(std::string m)
{
    model = m;
}

void Car::setYearModel(int y)
{
    yearModel = y;
}
