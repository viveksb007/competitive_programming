#include <iostream>
#include<string>

using namespace std;

int main()
{
    int n,i,j,p,test[10];
    string input;
    cin>>n;
    for(p=0;p<n;p++)
    {

    cin>>input;
    int l=input.length();
    for(i=0;i<l;i++)
    {
        for(j=i+1;j<=l;j++)
        {
            if(input[i]==input[j])
            {
               input.erase(input.begin()+j);
               l=input.length(); j--;

            }
        }
    }
    if(input.length()==26)
    {
        test[p]=1;
    }else{
    test[p]=0;
    }

    }
    for(p=0;p<n;p++)
    {
        if(test[p]==1)
        {
            cout<<"YES"<<endl;
        }else{
        cout<<"NO"<<endl;
        }
    }


}
