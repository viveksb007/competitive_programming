#include<iostream>
#include<stdlib.h>
using namespace std;

int main()
{
    int t,r[10000],c[10000],x[10000],n,cdif,rdif;
    bool ans = false;
    cin>>t;
    while(t--){
        cin>>n;
        for(int i=0;i<n;i++)
        {
            cin>>r[i]>>c[i]>>x[i];
        }
        for(int i=0;i<n-1;i++){
            cdif = abs(c[i]-c[i+1]); rdif = abs(r[i]-r[i+1]);
            if(x[i+1]%2 ==0 )
            {
                if( !(cdif+rdif+x[i])%2==0 )
                {
                    cout<<"No\n"; ans = true; break;
                }
            }else{
            if((cdif+rdif+x[i])%2 ==0)
            {
                cout<<"No\n"; ans = true; break;
            }
            }


        }
        if(!ans){
            cout<<"Yes"<<endl;
        }
    }
    return 0;

}
