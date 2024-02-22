#include<iostream>
using namespace std;
int main()
{
    int date[] = {31,28,31,30,31,30,31,31,30,31,30,31};
    int pd,pm,dd,dm;
    int t;
    cin>>pd>>pm>>dd>>dm;
    int x = date[pm-1]-pd;
    if(pm!=dm)
    {
        t = 0;
        for(int i = pm;i<dm-1;i++)
        {
            t+=date[i];
        }
        t+=x;
        t+=dd;
    }
    else
    {
        t = dd-pd;
    }
    cout<<t<<endl;

    return 0;
}
