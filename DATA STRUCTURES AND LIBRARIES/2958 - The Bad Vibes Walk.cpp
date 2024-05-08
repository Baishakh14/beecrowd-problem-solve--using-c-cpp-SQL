#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>vv,vd;
    int a,b;
    cin>>a>>b;
    for(int i = 0;i<a;i++)
    {
        for(int j = 0;j<b;j++)
        {
           int ab;
           char ba;
           cin>>ab>>ba;
           if(ba == 'V')
           {
            vv.push_back(ab);
           }
           else if(ba == 'D')
           {
            vd.push_back(ab);
           }
        }
    }
    sort(vv.begin(),vv.end(),greater<int>());
    sort(vd.begin(),vd.end(),greater<int>());
    int mn = vv.size();
    int nm = vd.size();
    for(int i = 0;i<mn;i++)
    {
        cout<<vv[i]<<"V"<<endl;
    }
    for(int i = 0;i<nm;i++)
    {
        cout<<vd[i]<<"D"<<endl;
    }
    return 0;
}
