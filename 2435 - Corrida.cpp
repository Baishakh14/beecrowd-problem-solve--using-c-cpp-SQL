#include <iostream>

using namespace std;

int main() {
    int a, b, c, d, e, f;
    cin >> a >> b >> c;
    cin >> d >> e >> f;
    if (b / (float)c < e/ (float)f)
        cout << a << endl;
    else
        cout << d << endl;
    return 0;
}
