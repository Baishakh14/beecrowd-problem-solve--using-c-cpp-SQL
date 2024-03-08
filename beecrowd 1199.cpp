#include<iostream>
#include<sstream>
//#include<cstdlib>
using namespace std;
int main()
{
  while(1)
{
    int n;
  string a;
  cin>>a;
  n = stoi(a); ///convert string to integer
  if(a[0]=='-') return 0;
  if(a[1]=='x')
  {
    stringstream (a) >> hex >> n; ///converting number from a to n in hexa-Base(sscanf in c)
    cout<<dec<<n<<endl; ///print converting decimal
  }
else
cout<<"0x"<<hex<<uppercase<<n<<endl; ///else print the int number to hexa convert uppercase letter if c the print C
}
    return 0;
}
