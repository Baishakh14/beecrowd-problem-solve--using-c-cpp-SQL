#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
double distance(int x1,int y1,int x2,int y2)
{
    return sqrt(pow(abs(x1-x2),2)+pow(abs(y2-y1),2)); ///find the deference
}
int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        int x1,y1,x2,y2,x3,y3;
        /// scanf("%d%d%d%d%d%d",&x1,&y1,&x2,&y2,&x3,&y3);
        cin>> x1>>y1>>x2>>y2>>x3>>y3;
        double a = distance(x1,y1,x2,y2);  ///distence of 3 side;
        double b = distance(x1,y1,x3,y3);
        double c = distance(x2,y2,x3,y3);
        double p = (a+b+c)/2; ///perimeter
        double area = sqrt(p*(p-a)*(p-b)*(p-c));  ///triangle area using perimeter
       // printf("%.3lf\n",area);
        cout<<fixed<<setprecision(03)<<area<<endl;
    }
    return 0;
}


