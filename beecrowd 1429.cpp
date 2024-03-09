#include<iostream>
#include<cmath>
#include<cstring>
using namespace std;
int main()
{
    while(1)
    {
        char a[100];
        cin.getline(a,100);
        if(strcmp(a,"0")==0) return 0;
        int l = strlen(a);
        int t = 0;
        int nl = l;
        for(int i = 0;i<l;i++)
        {
            int n = a[i]-'0';
            //cout<<n<<endl;
            int fac = tgamma(nl+1);
            nl--;
            //cout<<fac<<endl;
            t+=(n*fac);
            //cout<<t<<endl;
        }
        cout<<t<<endl;
    }
    return 0;
}
