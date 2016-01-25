#include<algorithm>
#include<iostream>
#include<math.h>
using namespace std;
#define MAX 10000000

unsigned long long a[MAX],i,j,sum_multiples[MAX],sum=0,sol,t;
void multiples()
{
    a[0]=0;
    a[1]=0;
    fill_n(sum_multiples,MAX,1);
    for(i=2;i<=sqrt(MAX);i++)
    {
        if(sum_multiples[i]==1)
        {
            for(j=i;j<MAX;j+=i)
           {
              if(sum_multiples[j]==1)
               sum_multiples[j]=i;
           }
        }
    }
    for(i=(int)sqrt(MAX);i<MAX;i++)
        if(sum_multiples[i]==1)
        sum_multiples[i]=i;
    for(i=2;i<MAX;i++)
    {
        sum+=sum_multiples[i];
        a[i]=sum;

    }

}
int main()
{
    multiples();
    cin>>t;
    while (t--)
    {
        cin>>sol;
        cout<<a[sol]<<"\n";
    }
    return 0;
}
