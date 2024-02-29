#include <iostream>
#include <cmath>
using namespace std;

bool ispo2(int n) {
    if (n <= 0 || n % 2 != 0)
        return false;
    int a = (n & -n);
    if (a == n)
        return true;
    return false;
}

int biggest(int a, int b, int c) {
    return max(max(a, b), c);
}

int main() {
    int n;
    while (cin >> n, n) {
        int ui, ri, li;
        int u, r, l;
        u = r = l = 0;
        for (int i = 0; i < n; i++) {
            cin >> ui >> ri >> li;
            if (ispo2(ui)) {
                if (biggest(ui, li, ri) == ui)
                    u += 2;
                else
                    u++;
            }
            if (ispo2(ri)) {
                if (biggest(ui, li, ri) == ri)
                    r += 2;
                else
                    r++;
            }
            if (ispo2(li)) {
                if (biggest(ui, li, ri) == li)
                    l += 2;
                else
                    l++;
            }
        }
        if (u > r && u > l)
            cout << "Uilton" << endl;
        else if (r > u && r > l)
            cout << "Rita" << endl;
        else if (l > r && l > u)
            cout << "Ingred" << endl;
        else
            cout << "URI" << endl;
    }
    return 0;
}

