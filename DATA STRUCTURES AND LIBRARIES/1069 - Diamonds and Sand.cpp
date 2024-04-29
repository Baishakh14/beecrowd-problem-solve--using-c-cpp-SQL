#include<iostream>
#include<string>
#include<stack>
using namespace std;
int main()
{
  int n;
  cin>>n;
  while(n--)
  {
   int td = 0; ///total daimond;
    stack<char>ab;
    string a;
    cin>>a;
    int s = a.size();
    for(int i = 0;i<s;i++)
    {
        if(a[i] == '<')
        {
            ab.push(a[i]);
        }
        else if(a[i] == '>')
        {
            if(!ab.empty())
            {
                if(ab.top() == '<')
                {
                    ab.pop();
                    td++;
                }
            }
        }
    }
    cout<<td<<endl;
  }

    return 0;
}
