#include <iostream>
using namespace std;

int main() {
    int mestreKung, mestreLu;
    cin >> mestreKung >> mestreLu;

    if ((mestreLu - 1) / 2 == (mestreKung - 1) / 2)
        cout << "oitavas" << endl;
    else if ((mestreLu - 1) / 4 == (mestreKung - 1) / 4)
        cout << "quartas" << endl;
    else if ((mestreLu - 1) / 8 == (mestreKung - 1) / 8)
        cout << "semifinal" << endl;
    else
        cout << "final" << endl;

    return 0;
}
