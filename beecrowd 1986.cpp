#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        unsigned short ab;
        ///cin >> hex >> ab; // Taking hexadecimal number
        scanf("%hx",&ab); ///both accecpted;
        if (ab != ' ')
            cout << char(ab);
    }
    cout << endl;
    return 0;
}

