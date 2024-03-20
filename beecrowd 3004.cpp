#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while(n--)
    {
       int a,b,c,d;
      cin>>a>>b>>c>>d;
       if((a<c && b<d)||a<d && b<c) cout<<"S"<<endl;
       else cout<<"N"<<endl;


    }
    return 0;
}

