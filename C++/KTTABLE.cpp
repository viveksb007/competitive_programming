#include <iostream>

using namespace std;

int main(){
        unsigned long long t,n,a[10000],b[10000],i,c;
        cin>>t;
        while (t--) {
                cin>>n;
                c=0;
                for (i = 0; i<n; i++) {
                        cin>>a[i];
                }
                for (i = 0; i<n; i++) {
                        cin>>b[i];
                }
                if(b[0]<=a[0]) {c++; }
                for (i = 1; i<n; i++) {
                        if(b[i]<=(a[i]-a[i-1]))
                        {c++; }
                }
                cout<<c<<endl;
        }
}
