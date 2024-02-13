#include<iostream>
using namespace std;
int main()
{
    int n;
    while(cin>>n)
    {
        int a = 0;
        while(n>1)
        {
            a++;
            n/=2;
        }
        cout<<a<<endl;
    }
    return 0;
}

