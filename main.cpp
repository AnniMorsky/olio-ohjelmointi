#include <iostream>
#include "chef.h"
#include "italianchef.h"
using namespace std;

int main()
{
    Chef chef("Gordon Ramsay");
    chef.makeSalad();
    chef.makeSoup();

    std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << std::endl;

    ItalianChef italianChef("Anthony Bourdain");
    italianChef.makeSalad();
    italianChef.makePasta();
    italianChef.makeSoup();

    std::cout << "name of the Italian Chef is " << italianChef.getName() << std::endl;
    return 0;
}
