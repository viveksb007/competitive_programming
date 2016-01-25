#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int j,i,t,n,m=0;
    unsigned long s[5000],c[10];
    cin>>t;
    for(i=0;i<t;i++)
    {
        c[m]=1000000000;
        cin>>n;
        for(j=0;j<n;j++)
        {
            cin>>s[j];
        }
        sort(s,s+n);

       for(j=0;j<n-1;j++)
       {
         if(s[j+1]-s[j]<c[m])
         {
             c[m]=s[j+1]-s[j];

         }
       }
       m++;
    }
    for(i=0;i<t;i++)
    {
        cout<<c[i]<<endl;
    }

}
