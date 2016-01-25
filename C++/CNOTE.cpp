#include<iostream>

using namespace std;

int main()
{
    unsigned long long x,y,k,n,t,i,j,p,c,req_p;
    bool luck=false,got_answer=false;
    cin>>t;
    for(i=0;i<t;i++)
    {
        cin>>x>>y>>k>>n;
        req_p=x-y;
        got_answer=false;
        luck=false;
        for(j=0;j<n;j++)
        {
            cin>>p>>c;
            if(!got_answer)
            {
            if(p>=req_p)
            {
                if(k>=c)
                {
                    luck=true;

                }
            }
            }
        }
        if(luck)
            cout<<"LuckyChef"<<endl;
        else
            cout<<"UnluckyChef"<<endl;
    }
    return 0;
}
