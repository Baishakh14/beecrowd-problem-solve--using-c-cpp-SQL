#include <iostream>
#include <cmath>

using namespace std;

void bs(int a[], int s) {
    for (int i = 0; i < s; i++) {
        int c = 0;
        for (int j = 0; j < s - 1 - i; j++) {
            if (a[j] > a[j + 1]) {
                c++;
                int t = a[j];
                a[j] = a[j + 1];
                a[j + 1] = t;
            }
        }
        if (c == 0)
            break;
    }
}

int main() {
    int n;
    while (cin >> n) {
        int a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        bs(a, n);
        int s = 0;
        int i = 0;
        int j = n - 1;
        while (i < j) {
            s += abs(a[i] - a[j]);
            i++;
            j--;
        }
        cout << s << endl;
            }
    return 0;
}
