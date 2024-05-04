#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int ascending(const void *a, const void *b)
{
    return (*(int *)a - *(int *)b);
}

int achar(const vector<int> &ac, int comp)
{
    for (int k = 0; k < ac.size(); k++)
    {
        if (ac[k] == comp)
        {
            return k + 1;
        }
    }
    return 0;
}

int main()
{
    int n, f, q, j, l;
    n = 0;
    while (true)
    {
        cin >> f >> q;
        if (f == 0 && q == 0)
            break;
        vector<int> vet(f);

        for (j = 0; j < f; j++)
        {
            cin >> vet[j];
        }

        sort(vet.begin(), vet.end());

        cout << "CASE# " << n + 1 << ":\n";
        for (j = 0; j < q; j++)
        {
            cin >> l;

            int m = achar(vet, l);

            if (m != 0)
                cout << l << " found at " << m << endl;
            else
                cout << l << " not found\n";
        }
        n++;
    }
    return 0;
}
