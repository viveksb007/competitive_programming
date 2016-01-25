#include<iostream>
using namespace std;
typedef unsigned long long ull;
int main()
{
	ull t,i,j,l,q,g,sol,n;
    
    cin>>t;
    for (i = 0; i < t; ++i)
    {
    	cin>>g;
    	for (j = 0; j < g; ++j)
    	{
    		cin>>l>>n>>q;
    		if((n%2!=0)and(l==1))
    		{   switch(q)
    			{
    				case 1: sol = n/2;
    			            cout<<sol<<endl; 
    			            break;
    				case 2: sol = n/2;
    			            cout<<sol+1<<endl;
    				        break;
    			}
    			 
    		}else if((n%2!=0)and(l==2))
    		{
               switch(q)
    			{
    				case 1: sol = n/2;
    			            cout<<sol+1<<endl; 
    			            break;
    				case 2: sol = n/2;
    			            cout<<sol<<endl;
    				        break;
    			}
    		}else if(n%2==0)
    		{
    			sol = n/2;
    			cout<<sol<<endl;
    		}
    	}

    }
	return 0;
}