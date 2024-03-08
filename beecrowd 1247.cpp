#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int a, b, c;
    while (cin >> a >> b >> c) {
        double tdr = sqrt(144 + (a * a));
        double tt = 12.0 / b;
        double tg = tdr / c;
        if (tt >= tg)
            cout << "S" << endl;
        else
            cout << "N" << endl;
    }

    return 0;
}

