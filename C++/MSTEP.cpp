#include <iostream>

using namespace std;

int main()
{
    unsigned long n,a[500][500],b[250000][2],s=0;
    int t,i,j,p,l,m,ans[5];
    cin>>t;
    for(p=0;p<t;p++)
    {
        s=0;
        cin>>n;
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                cin>>a[i][j];
                b[a[i][j]-1][0]=i;
                b[a[i][j]-1][1]=j;
            }
        }
        for(i=0;i<n*n-1;i++)
        {
            l=b[i][0]-b[i+1][0];
            m=b[i][1]-b[i+1][1];
            if(l<0)
               {
                 l=(-1*l);
               }
            if(m<0)
               {
                 m=(-1*m);
               }
            s=s+m+l;
        }
        ans[p]=s;
    }
    for(p=0;p<t;p++)
    {
        cout<<ans[p]<<endl;
    }

}
