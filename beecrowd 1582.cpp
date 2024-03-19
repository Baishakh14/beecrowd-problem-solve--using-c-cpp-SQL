#include<iostream>
using namespace std;

int gcd(int a, int b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}

bool isPythagorean(int a, int b, int c) {
    return (c * c) == (a * a) + (b * b);
}

int main() {
    int a, b, c;
    while (cin >> a >> b >> c) {
        if ((isPythagorean(a, b, c) || isPythagorean(a, c, b) || isPythagorean(b, c, a)) && (gcd(gcd(a, b), c)) == 1)
            cout << "tripla pitagorica primitiva\n";
        else if ((isPythagorean(a, b, c) || isPythagorean(a, c, b) || isPythagorean(b, c, a)) && (gcd(gcd(a, b), c)) != 1)
            cout << "tripla pitagorica\n";
        else
            cout << "tripla\n";
    }
    return 0;
}
