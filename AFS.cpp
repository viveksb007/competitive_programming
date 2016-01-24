#include<algorithm>
#include<iostream>
using namespace std;
#define MAX 1000001
#define MAX_half 500000
unsigned long long a[MAX],i,j,sum_multiples[MAX],sum=0,sol;
void multiples()
{
    a[0]=1;
    a[1]=1;
    fill_n(sum_multiples,MAX,1);
    for(i=2;i<MAX_half;i++)
    {
        for(j=2*i;j<MAX;j+=i)
        {
          sum_multiples[j]+=i; //sum+=i;
        }
    }
    for(i=2;i<MAX;i++)
    {
        sum+=sum_multiples[i];
        a[i]=sum;

    }

}
int main()
{
    multiples();

    int t;
    cin>>t;
    while (t--)
    {
        cin>>sol;
        cout<<a[sol]<<"\n";
    }

    return 0;
}
