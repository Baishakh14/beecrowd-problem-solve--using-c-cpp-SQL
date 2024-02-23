#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n,r,t = 1;
    while(cin>>n&&n!=-1)
    {

        if(n==0) r = 4;
        else if(n==1) r = 9;
        else r = (1+pow(2,n))*(1+pow(2,n));
        cout<<"Teste "<<t++<<endl<<r<<endl<<endl;
    }

    return 0;
}
