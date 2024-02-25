#include <iostream>
using namespace std;
bool hasThree(unsigned long long a) {
    while (a > 0) {
        if (a % 10 == 3) return true;
        a /= 10;
    }
    return false;
}

int main() {

    unsigned long long f[1000];

    f[0] = 0;
    f[1] = 1;

    for (int i = 2; i < 1000; i++) {
        f[i] = f[i - 1] + f[i - 2];
    }

    int n;
    while (cin >> n) {
        int i;
        for (i = 2; i < 1000; i++) {
            if (hasThree(f[i]) || f[i] % 3 == 0) {
                n--;
            }
            if (n == 0) break;
        }
        cout << f[i] << endl;
    }

    return 0;
}

