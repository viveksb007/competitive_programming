#include <iostream>

using namespace std;

int main()
{
   int i,j;
   unsigned long a[100000],t,s=0,d=5,c;
    cin>>t;
    for(i=0;i<t;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<t;i++)
    {   s=0;d=5;
        while(1){
            c=a[i]/d;
            if(c==0){break;}
            else
            {
                s=s+c;
                d*=5;
            }
        }
        cout<<s<<endl;
    }
}

