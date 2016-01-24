#include <iostream>

using namespace std;

int main()
{
    int a[100000],n,p=0,i,j,c,b[100000];

    while(1){
            cin>>n; if(n==0){break;}
            c=0;
        for(i=0;i<n;i++){cin>>a[i];}
        for(i=0;i<n-1;i++)
        {
            for(j=0;j<n-1;j++)
            { if((1+i)==a[j])
                {
                    if((1+j)!=a[i])
                       {c=1; break;}
                }
            }
            if(c==1){break;}
        }
       b[p]=c; p++;

       }
        for(i=0;i<p;i++)
        {
        if(b[i]==1)
        cout<<"not ambiguous"<<endl;
        else
        cout<<"ambiguous"<<endl;
        }

}
