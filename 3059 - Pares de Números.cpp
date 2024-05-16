#include <iostream>
#include <vector>
using namespace std;

int main() {

    int n, l, f;
    cin >> n >> l >> f;

    vector<int> vet(n);

    for (int i = 0; i < n; ++i)
        cin >> vet[i];

    int count = 0;
    for (int i = 0; i < n; ++i)
        for (int j = i + 1; j < n; ++j)
            if (vet[i] != vet[j])
                if (vet[i] + vet[j] >= l && vet[i] + vet[j] <= f)
                    count += 1;

    cout << count << endl;

    return 0;

}
