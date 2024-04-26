#include<bits/stdc++.h>
int find_carry(unsigned long long a,unsigned long long b)
{
    unsigned long long ab,bc;
    int c,ct; ///carry and count carry;
    c = ct = 0;
    while(a>0 || b>0)
    {
        ab = a%10;
        bc = b%10;
        a/=10;
        b/=10;
        if(ab+bc+c > 9)
        {
            ct++;
            c = 1;
        }
        else c = 0;
    }
    return ct;
}
using namespace std;
int main()
{
  unsigned long long a,b;
  while(cin>>a>>b && (a||b))
  {
   int c = find_carry(a,b);
   if(c == 0) cout<<"No carry operation."<<endl;
   else if(c == 1) cout<<"1 carry operation."<<endl;
   else cout<<c<<" carry operations."<<endl;
  }
    return 0;
}
