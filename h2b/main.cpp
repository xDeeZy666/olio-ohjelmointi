#include <iostream>
#include <vector>
#include "car.h"

using namespace std;

int main()
{
    vector<Car> carList;

    carList.push_back(Car("Toyota", "Corolla", 2015));
    carList.push_back(Car("Volvo", "V70", 2008));
    carList.push_back(Car("Skoda", "Octavia", 2020));

    cout << "Listan toinen auto:" << endl;
    carList[1].printData();

    cout << endl << "Kaikki autot:" << endl;
    for (int i = 0; i < carList.size(); i++) {
        carList[i].printData();
    }

    return 0;
}
