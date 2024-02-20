#include<iostream>
#include<string>
using namespace std;
int main()
{
   string a;
   while(cin>>a)
   {
       int s = a.size();
       int t = s;
       int k;
       for(int i = 0;i<s;i++)
       {
           for(int j = 0;j<i;j++)
           {
               printf(" ");
           }
           for(k = 0;k<t;k++)
           {
              cout<<a[k];
              if(k<t-1) cout<<" "; ///decline the space after last word;
           }
           cout<<endl;
           t--;
       }
       //printf("\n");
       cout<<endl;
   }
  // cout<<endl;


    return 0;
}
