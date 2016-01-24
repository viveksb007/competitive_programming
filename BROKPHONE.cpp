#include<iostream>

using namespace std;

int main(){
    int t,j;
    unsigned long long n,i,a[100000],f[100000],sol;
    cin>>t;
    for(j=0;j<t;j++)
    {
        cin>>n;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
            f[i]=0;
        }
        sol=0;
        for(i=0;i<n-1;i++)
        {

            if ((a[i]!=a[i+1]) && (f[i]==0))
            {
                sol+=2;
                f[i]=1;
                f[i+1]=1;
            }else
            {
                if ((a[i]!=a[i+1]) && (f[i]==1))
               {
                sol+=1;
                f[i+1]=1;
               }
            }
        }
        cout<<sol<<endl;
    }


return 0;
}
