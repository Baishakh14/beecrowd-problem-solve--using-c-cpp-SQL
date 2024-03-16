#include<iostream>
using namespace std;
int gcd(int a,int b)
{
    if(b!=0) return gcd(b,a%b);
    else return a;
}
int main()
{
 int a,b;
 char d;
 cin>>a>>d>>b; ///for ignoring the .;
 int x = (a*100)+b;
 int r = 36000/gcd(36000,x);
 cout<<r<<endl;
    return 0;
}
