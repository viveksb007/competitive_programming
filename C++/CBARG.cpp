#include<iostream>

using namespace std;

int main()
{
    unsigned long long i,j,t,n,a[100000],sol;
    cin>>t;
    for(i=0;i<t;i++)
    {
        cin>>n;
        sol=0;
        for(j=0;j<n;j++)
        {
            cin>>a[j];
            if(j==0)
            {
                sol=a[j];
            }else{
            if(a[j]>a[j-1])
            {
                sol+=(a[j]-a[j-1]);
            }
            }
        }
    cout<<sol<<endl;
    }

    return 0;
}
