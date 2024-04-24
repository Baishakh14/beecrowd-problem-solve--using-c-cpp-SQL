#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    int ab[a];
    for (int i = 0; i < a; i++) {
        cin >> ab[i];
    }
    int s = 0;
    int t;
    for (int i = 0; i < a; i++) {
        t = b - ab[i];
        s += abs(t);
        ab[i + 1] += t;
    }
    cout << s << endl;
    return 0;
}
