#include <iostream>
#include <cstring>
using namespace std;

int main() {
    int a = 1;
    char ab[10001];
    char abc[3000001];
    
    while (scanf("%s", ab) && strcmp(ab, "0") != 0) {
        scanf(" %s", abc);
        
        if (a != 1) cout << endl;
        
        if (strstr(abc, ab)) {
            cout << "Instancia " << a << endl;
            cout << "verdadeira" << endl;
        } else {
            cout << "Instancia " << a << endl;
            cout << "falsa" << endl;
        }
        
        a++;
    }
    
    return 0;
}
