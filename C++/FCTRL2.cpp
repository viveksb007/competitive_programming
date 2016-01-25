#include <iostream>

using namespace std;

int main()
{
   int t,a[100],c[1][2]={1,1},i,j;
    cin>>t;
    for(i=0;i<t;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<t;i++)
    {
        if(a[i]>c[0][0])
        {
            for(j=c[0][0]+1;j<=a[i];j++)
            {
                c[0][1]*=j;
            }
            c[0][0]=a[i];
            cout<<c[0][1]<<endl;
        }else
        {
            for(j=c[0][0];j>a[i];j--)
            {
                c[0][1]/=j;
            }
            c[0][0]=a[i];
            cout<<c[0][1]<<endl;
        }
    }
}
