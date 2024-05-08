#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
 stack<char> st;
 string a;
 getline(cin,a);
 int n = a.size();
 for(int i = 0;i<n;i++)
 {
    if(a[i] == '(')
    {
        st.push(a[i]);
    }
    else if(a[i] == ')')
    {
        if(!st.empty())
        {
            if(st.top() == '(')
            st.pop();
        }
    }
 }
 if(st.empty())
 {
    cout<<"Partiu RU!"<<endl;
 }
 else cout<<"Ainda temos "<<st.size()<<" assunto(s) pendente(s)!"<<endl;
    return 0;
}
