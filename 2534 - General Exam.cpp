#include <iostream>

using namespace std;

void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; ++i) {
        for (int j = 0; j < n - i - 1; ++j) {
            if (arr[j] < arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int a, b;

    while (cin >> a >> b) {
        int ab[a];
        int ba[b];

        for (int i = 0; i < a; ++i) {
            cin >> ab[i];
        }

        bubbleSort(ab, a);

        for (int i = 0; i < b; ++i) {
            cin >> ba[i];
        }

        for (int i = 0; i < b; ++i) {
            cout << ab[ba[i] - 1] << endl;
        }
    }

    return 0;
}
