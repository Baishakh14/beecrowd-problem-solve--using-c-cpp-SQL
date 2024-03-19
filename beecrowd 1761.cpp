#include <iostream>
#include <cmath>
#include<iomanip>
using namespace std;

int main() {
    double a, b, c;
    double x = 3.141592654 / 180.0;
    while (cin >> a >> b >> c) {
        double ans = 5 * ((tan(x * a) * b) + c);
        cout << fixed << setprecision(2) << ans << endl;
    }
    return 0;
}
