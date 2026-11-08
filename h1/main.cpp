#include <iostream>
#include <iomanip>    // fixed ja setprecision
#include <stdexcept>  // runtime_error

using namespace std;

void calcSum(int a, int b)
{
    cout << a << " + " << b << " = " << a + b << endl;
}

void calcDiv(int a, int b)
{
    if (b == 0) {
        cout << "Virhe: jakaja ei saa olla nolla!" << endl;
        return;
    }
    float tulos = static_cast<float>(a) / b;
    cout << a << " / " << b << " = " << fixed << setprecision(2) << tulos << endl;
}

int retSum(int a, int b)
{
    return a + b;
}

float retDiv(int a, int b)
{
    if (b == 0) {
        throw runtime_error("jakaja ei saa olla nolla");
    }
    return static_cast<float>(a) / b;
}

// Pääohjelma

int main()
{
    int a, b;

    cout << "Anna luku a: ";
    cin >> a;
    cout << "Anna luku b: ";
    cin >> b;

    // Tulostavat funktiot
    calcSum(a, b);
    calcDiv(a, b);

    // Palauttavat funktiot
    int summa = retSum(a, b);
    cout << a << " + " << b << " = " << summa << endl;

    float result;
    //jos try-lohkossa nousee runtime error, hypätään catch-lohkoon
    try {
        result = retDiv(a, b);
        cout << a << " / " << b << " = " << fixed << setprecision(2) << result << endl;
    } catch (runtime_error& e) {
        cout << "Error: " << e.what() << endl;
    }

    return 0;
}
