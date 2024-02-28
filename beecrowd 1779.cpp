#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int t;
    cin >> t;
    int cas = 0;
    while (t--) {
        int max = 0, c = 0, r = 0;
        int a;
        cin >> a;
        int b[a];
        for (int i = 0; i < a; i++) {
            cin >> b[i];
            max = fmax(max, b[i]);
        }
        for (int i = 0; i < a; i++) {
            if (b[i] == max)
                c++;
            else
                c = 0;
            r = fmax(r, c);
        }
        cout << "Caso #" << ++cas << ": " << r << endl;
    }
    return 0;
}

