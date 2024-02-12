#include <iostream>
#include <string>
#include <cmath>
using namespace std;


int main1() {
    setlocale(LC_ALL, "RU");

    float a;
    a = 2.574;
    cout << "«начение a: " << a << endl;

    float b;
    b = -0.418;
    cout << "«начение b: " << b << endl;

    float x;
    cout << "¬ведите x: ";
    cin >> x;

    if (cin.fail()) {
        cout << "¬ведите число ! \n" << endl;
        cin.clear();
        while (cin.get() != '\n')
        return 1;
    }

    float y;

    if (x < 2.8) {
        y = exp(-1.2 * x) + b * tan(x);
        cout << "y = " << y << endl;
    }
    else
    {
        if ((2.8 <= x < 6)) {
            y = (x + 2) / (a + b);
            cout << "y = " << y << endl;
        }
        else
        {
            if (x >= 6) {
                y = cos(x) + exp(2 * x);
                cout << "y = " << y << endl;
            }
        }
    }

    return 0;
}