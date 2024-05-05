#include<bits/stdc++.h>
using namespace std;
int main()
{
 int n;
 cin>>n;
 while(n--)
{
    vector<int>ab;
    vector<int>ba;
    int m;
    cin>>m;
    for(int i = 0;i<m;i++)
    {
        int d;
        scanf("%d",&d);
        ab.push_back(d);
        ba.push_back(d);

    }
    int c = 0;
    sort(ab.begin(),ab.end(),greater<int>());
    for(int i = 0;i<m;i++)
    {
        if(ab[i] == ba[i]) c++;
    }
    cout<<c<<endl;
}
    return 0;
}
