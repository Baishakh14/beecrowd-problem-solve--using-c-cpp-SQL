#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        int a, d;
        cin >> a;
        vector<int> ab;
        for (int j = 0; j < a; j++) {
            int abc;
            cin>>abc;
           ab.push_back(abc);
        }
        d = (a / 2);
        cout << "Case " << i << ": " << ab.at(d) << endl;
    }
    return 0;
}
