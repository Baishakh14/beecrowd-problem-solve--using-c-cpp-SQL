#include<bits/stdc++.h>
using namespace std;
int main()
{
int n;
while(cin>>n)
{
    map<int,string>mp;
    map<int,string> :: iterator it;
    for(int i = 0;i<n;i++)
    {
        int ab;
        string ba;
        cin>>ba>>ab;
        mp.insert({ab,ba});
    }
    int s = mp.size();
    int i = 0;
    for(auto it : mp)
    {
        cout<<it.second;
        if(i<s-1)
        {
            cout<<" ";
            i++;
        }
    }
    cout<<endl;
}

    return 0;
}
