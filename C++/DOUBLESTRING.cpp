#include <iostream>

using namespace std;

int main()
{
   int t,i,j;
   long int a[10000];
    cin>>t;
    for(i=0;i<t;i++)
    {
        cin>>j;
        if(j%2==0)
        { a[i]=j;
        }else
        { a[i]=j-1;
        }
    }
    for(i=0;i<t;i++)
    {
        cout<<a[i]<<endl;
    }
}
