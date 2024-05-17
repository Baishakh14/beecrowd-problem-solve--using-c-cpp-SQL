#include<bits/stdc++.h>
using namespace std;
bool isprime(long int a)
{
    for(long int i = 2;i<a;i++)
    {
        if(a%i == 0) return false;
    }
    return true;
}
int p10(long int a)
{
    long int s = 0;
    int x = 10;
    while(x)
    {
       if(isprime(a))
       {
        s+=a;
        x--;
       }
       a++;
    }
    return s;
}
int main()
{
    long int a;
    cin>>a;
     long int dis = p10(a);
     int h = 60000000/dis;
     int d = h/24;
     cout<<dis<<" km/h"<<endl;
     cout<<h<<" h / "<<d<<" d"<<endl;

    return 0;
}
