#include<bitset>
#include<math.h>
#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;

#define MAX 100000001
#define sqrt_MAX 10000

bitset<MAX> primes;
int arr_val[MAX];

void seive()
{
    int i,j;
    primes.set();
    for(i=3;i<=sqrt_MAX;i+=2)
    {
        if(primes[i]==1)
        {
            for(j=i*i;j<MAX;j+=i)
            {
                primes[j]=0;
            }
        }
    }

    arr_val[2]=1;
    for(i=3;i<MAX;i++)
    {
        if(i%2 && primes[i])
        {
            arr_val[i]=arr_val[i-1]+1;
        }else
        {
            arr_val[i]=arr_val[i-1];
        }
    }



}
int main()
{
    seive();
    unsigned long long n;
    double k,sol;
    cin>>n;

    while (n)
    {
        k = n/log(n);
        sol = ((arr_val[n]-k)/arr_val[n])*100;
        sol = abs(sol);
        cout<<fixed<<setprecision(1)<<sol<<"\n";
        cin>>n;
    }
    return 0;
}
