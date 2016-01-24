#include <iostream>

using namespace std;

int main()
{
int t,i;
unsigned long a[10000],input;
cin>>t;
for(i=0;i<t;i++)
{
    cin>>input;
    if(input%2==0)
    cout<<"ALICE"<<endl;
    else
    cout<<"BOB"<<endl;

}
}
