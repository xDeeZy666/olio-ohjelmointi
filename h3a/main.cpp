#include <iostream>
#include "chef.h"
#include "italianchef.h"
using namespace std;

int main()
{
    {
        Chef chef("Gordon Ramsay");
        chef.makeSalad();
        chef.makeSoup();
    }   // chef tuhoutuu tässä → destruktori

    {
        ItalianChef italianChef("Anthony Bourdain");
        italianChef.makeSalad();
        italianChef.makeSoup();
        italianChef.makePasta();
        cout << "name of the Italian Chef is " << italianChef.getName() << endl;
    }   // italianChef tuhoutuu tässä

    return 0;
}
