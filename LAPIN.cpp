#include <iostream>
#include<string>
#include<algorithm>

using namespace std;

int main()
{
    int t,l,c[100],i;
    string input,first,last;
    cin>>t;
    for(i=0;i<t;i++)
    {
        cin>>input;
        l=input.length();
        if(l%2==0)
        {
            first.assign(input,0,l/2);
            last.assign(input,l/2,l/2);
            sort(first.begin(),first.end());
            sort(last.begin(),last.end());
            if(first.compare(last)==0)
            {
                c[i]=1;
            }else
            {
                c[i]=0;
            }

        }else
        {
            first.assign(input,0,l/2);
            last.assign(input,l/2+1,l/2);
            sort(first.begin(),first.end());
            sort(last.begin(),last.end());
            if(first.compare(last)==0)
            {
                c[i]=1;
            }else
            {
                c[i]=0;
            }

        }
    }
    for(i=0;i<t;i++)
    {
        if(c[i]==1)
            {cout<<"YES"<<endl;}
        else
            {cout<<"NO"<<endl;}
    }

}
