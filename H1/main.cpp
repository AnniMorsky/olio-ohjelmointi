#include <iostream>
#include <iomanip>
#include <stdexcept>
#include "laskut.h"

using namespace std;

int main() {
    int a, b;
    int result;
    float divResult;

    cout << "Anna ensimmainen kokonaisluku: ";
    cin >> a;

    cout << "Anna toinen kokonaisluku: ";
    cin >> b;

    calcSum(a, b);
    calcDiv(a, b);
    cout << "Summa (retSum): " << result << endl;

    try {
        divResult = retDiv(a, b);
        cout << a << "/" << b << " = " << fixed << setprecision(2) << divResult << endl;
    }
    catch (runtime_error& e) {
        cout << "Error: " << e.what() << endl;
    }

    return 0;
}