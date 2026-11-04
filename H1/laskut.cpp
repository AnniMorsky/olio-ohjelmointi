#include <iostream>
#include <iomanip>
#include <stdexcept>
#include "laskut.h"

using namespace std;

void calcSum(int a, int b) {
    cout << a << " + " << b << " = " << a + b << endl;
}

void calcDiv(int a, int b) {
    if (b == 0) {
        cout << "Virhe: Jakaja ei saa olla nolla!" << endl;
    }
    else {
        cout << a << " / " << b << " = " << fixed << setprecision(2) << (float)a / b << endl;
    }
}

int retSum(int a, int b) {
    return a + b;
}

float retDiv(int a, int b) {
    if (b == 0) {
        throw runtime_error("Jakaja ei saa olla nolla!");
    }
    return (float)a / b;
}