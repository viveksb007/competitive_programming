#include<bits/stdc++.h>

typedef unsigned long long ull;

using namespace std;

bool compare(const pair<ull,ull>&x,const pair<ull,ull>&y)
{
    return x.first < y.first;
}

int main()
{
    vector<pair<ull,ull> > len;
    ull t,i,j,k,c,p,n,ans;
    bool same;
    string inp;
    cin>>t;
    for(p=0;p<t;p++)
    {
        cin>>inp;
        cin>>k;
        vector<pair<ull,ull> > len;
        ans=0;
        for(i=0;i<inp.length();i++)
        {
            c=0;
            same = true;
            for(j=i+1;j<=inp.length();j++)
            {
                if(inp[i]==inp[j])
                {
                    c++; inp.erase(j,1); j--;
                }
            }
           c++;
           for(j=0;j<len.size();j++)
           {
               if(c==len[j].first){ len[j].second++; same=false; }
           }
           if(same) { len.push_back(make_pair(c,1)); }
        }

        sort(len.begin(),len.end(),compare);
        n = len.size();

        for(i=1;i<n;i++)
        {
            if((len[n-i].first - len[0].first) <=k) break;
            else {
               ans+= ((len[n-i].first - len[0].first - k) * len[n-i].second);
            }
        }
        cout<<ans<<endl;
        /*
        for(i=0;i<len.size();i++)
            cout<<len[i].first<<' '<<len[i].second<<endl;
            */
    }
    return 0;
}
