#include <iostream>

using namespace std;
int t,a[100],o[100][2],s,c=0,maxn=0,i,j,p,d;
void findmax()
{
   for(p=0;p<s;p++)
   {
       c=0;
       if(a[p]!=0)
       {    d=a[p];
           for(j=p;j<s;j++)
           {
               if(a[j]==d)
               {
                   c++; a[j]=0;
               }
           }
           if(c>maxn){maxn=c; o[i][0]=d;}
           else if(c==maxn)
                {  if(o[i][0]>d){o[i][0]=d;}
                }

       }
   }
   o[i][1]=maxn;
}

int main()
{

    cin>>t;
    for(i=0;i<t;i++)
    {   maxn=0;
        cin>>s;
        for(j=0;j<s;j++)
        {
            cin>>a[j];
        }
        findmax();
    }
    for(i=0;i<t;i++)
    {
      cout<<o[i][0]<<" "<<o[i][1]<<endl;
    }
}
