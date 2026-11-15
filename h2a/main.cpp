#include <iostream>
#include <memory>        // std::unique_ptr ja std::make_unique
#include "car.h"
#include "rectangle.h"
#include "student.h"

using namespace std;

int main()
{
    // --- Car pinomuistiin ---
    Car car;
    car.setBrand("Toyota");
    car.setModel("Corolla");
    car.setYearModel(2015);
    car.printData();

    // --- Rectangle kekomuistiin ---
    Rectangle* rect = new Rectangle;
    rect->setWidth(4.0);
    rect->setHeight(2.5);
    cout << "Pinta-ala: " << rect->getArea() << endl;
    cout << "Ympärysmitta: " << rect->getCircum() << endl;
    delete rect;
    rect = nullptr;

    // --- Student smart pointerilla ---
    unique_ptr<Student> student = make_unique<Student>();
    student->setName("Eetu");
    student->setStudentNumber(12345);
    student->setAverage(4.2);
    cout << "Nimi: " << student->getName() << endl;
    cout << "Opiskelijanumero: " << student->getStudentNumber() << endl;
    cout << "Keskiarvo: " << student->getAverage() << endl;

    return 0;
}
