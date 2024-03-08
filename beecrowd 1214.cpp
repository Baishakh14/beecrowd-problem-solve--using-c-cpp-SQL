#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int n;
    cin >> n;
    while (n--) {
        int a;
        cin >> a;
        int b[a];
        double s = 0, c = 0;
        for (int i = 0; i < a; i++) {
            cin >> b[i];
            s += b[i];
        }
        s /= a;
        for (int i = 0; i < a; i++) {
            if (b[i] > s) c++;
        }
        cout << fixed << setprecision(3) << (c / a) * 100 << "%" << endl;
    }
    return 0;
}

