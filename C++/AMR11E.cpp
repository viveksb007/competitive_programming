#include<bits/stdc++.h>
using namespace std;
#define MAX 4000
vector<int> lucky;
int i,j;
unsigned long a[MAX];
void seive()
{
    fill_n(a,MAX,1);
    for(i=2;i<MAX;i++)
    {
        if(a[i]==1)
        {
            for(j=2*i;j<MAX;j+=i)
            {
                a[j]++;
            }
        }
    }
    for(i=30;i<MAX;i++)
        if(a[i]>=4)
        lucky.push_back(i);
}

int main()
{
    int t,input;
    seive();
    cin>>t;
    while(t--)
    {
        cin>>input;
        cout<<lucky[input-1]<<endl;

    }
    return 0;
}
