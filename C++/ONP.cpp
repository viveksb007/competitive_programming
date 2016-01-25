#include<stack>
#include<iostream>
#include<stdio.h>
#include<string>
#include<cctype>
using namespace std;
int main()
{
    stack<char> si;
    int t,l,i;
    string exp,output;
    cin>>t;
    while(t--)
    {
        cin>>exp;
        l = exp.length();
        for(i=0;i<l;i++)
        {
            if(isalpha(exp[i]))
            {
             cout<<exp[i];
            }else if(exp[i]==')')
            {
              cout<<si.top();
              si.pop();
            }else if(exp[i]!='(')
            {
               si.push(exp[i]);
            }
        }

        cout<<endl;
    }
    return 0;
}
