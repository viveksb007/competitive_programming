#include<iostream>
using namespace std;
unsigned long x,y,t,i;
int main()
{
    cin>>t;
    for(i=0;i<t;i++)
    {
        cin>>x>>y;
        if(x==y)
        {
            if(x%2==0)
                cout<<x+y<<"\n";
            else
                cout<<x+y-1<<"\n";
            }else if(x==2+y){


                if(x%2==0)
                cout<<x+y<<"\n";
            else
                cout<<x+y-1<<"\n";

            }else{
            cout<<"No Number\n";
            }

    }
    return 0;

}
