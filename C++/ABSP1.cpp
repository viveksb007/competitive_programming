#include<iostream>
using namespace std;
int main()
{
    unsigned long long t,n,i,j,a[10000],ans,sum;
    cin>>t;
    for(i=0;i<t;i++)
    {
        sum=0;
        ans=0;
        cin>>n;
        for(j=0;j<n;j++)
        {
            cin>>a[j];
            sum+=a[j];
        }
        for(j=0;j<n;j++)
        {
            sum-=a[j];
            ans+=(sum - (n-1-j)*a[j]);
        }
        cout<<ans<<endl;
    }

    return 0;

}
