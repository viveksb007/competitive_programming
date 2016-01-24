#include <iostream>
#include<string>
#include<vector>
#include <algorithm>


using namespace std;

unsigned long t,p,i,l,j;
vector<string> output;
string input,change;


int main()
{
 cin>>t;
 for(j=0;j<t;j++)
 {
    cin>>input;
    change=input;
    l=input.length();
    if(l==1){change="11"; output.push_back(change); continue;}
    for(i=0;i<l/2;i++)
    {
        change[l-1-i]=change[i];
    }
    if(input.compare(change)>=0)
    {
      if(l%2==0)
       {
         if(change[(l/2)-1]!='9')
         change[(l/2)-1]++;
         else
         {

             for(p=0;p<l/2;p++)
             {

                 if(change[l/2-1-p]=='9')
                 {
                     if(l/2-1-p==0)
                    {change.replace(0,1,"10"); l++;}
                    else
                    change.replace(l/2-1-p,1,"0");
                 }
                 else
                 {
                     change[l/2-1-p]++;
                     break;
                 }
             }

         }
       }
        else
       {
        if(change[(l/2)]!='9')
         change[(l/2)]++;
         else
         {

             for(p=0;p<=l/2;p++)
             {

                 if(change[l/2-p]=='9')
                 {
                     if(l/2-p==0)
                    {change.replace(0,1,"10"); l++; break;}
                    else
                    change.replace(l/2-p,1,"0");
                 }
                 else
                 {
                     change[l/2-p]++;
                     break;
                 }
             }

         }
       }

        for(i=0;i<l/2;i++)
       {
        change[l-1-i]=change[i];
       }
       output.push_back(change);

    }else
    output.push_back(change);
 }
vector<string>::iterator it;
for(it = output.begin(); it != output.end(); ++it) {
    cout << *it << endl;
}

}
