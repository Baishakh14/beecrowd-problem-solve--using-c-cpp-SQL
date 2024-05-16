#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    int n = a%b;
    int m = a/b;
    // cout<<m<<endl;
    for(int i = 0;i<b;i++)
    {
        if(i<n) cout<<m+1<<endl;
        else cout<<m<<endl;
    }
}
