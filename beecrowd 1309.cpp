#include<iostream>
#include<string>
#include<iomanip>
using namespace std;

int main() {
    string a;
    int b;

    while (cin >> a >> b) {
        cout << "$";
        int l1 = a.length();

        for (int i = 0; i < l1; i++) {
            if ((l1 - i) % 3 == 0 && i > 0)
                cout << ",";
            cout << a[i];
        }

        cout << ".";
        cout << setw(2) << setfill('0') << b << endl;
    }

    return 0;
}

