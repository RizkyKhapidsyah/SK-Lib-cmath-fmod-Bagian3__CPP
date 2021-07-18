#include <iostream>
#include <cmath>
#include <conio.h>

using namespace std;

int main() {
    double x = 98.2, y = 76.5;
    double result = fmod(x, y);
    cout << "Remainder of " << x << "/" << y << " = " << result << endl;

    x = -20.14, y = 4.0;
    result = fmod(x, y);
    cout << "Remainder of " << x << "/" << y << " = " << result << endl;

    _getch();
    return 0;
}