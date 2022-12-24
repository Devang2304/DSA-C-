#include<bits/stdc++.h>
using namespace std;
int dev[100005];
int main()
{
    int t; cin>>t;
    while(t--){
        int i, n, last=-1, ans=0; cin>>n;
        int a[n];
        for(i=0; i<n; i++){
            cin>>a[i];
        }
        for(i=n-1; i>0; i--){
            if(a[i-1] > a[i]){
              last=i-1;
              break;
            }
        }
        if(last>=0){
        for(i=0; i<=last; i++){
                dev[a[i]]=1;
        }
        for(i=last+1; i<n; i++){
            if(dev[a[i]] == 1){
               last=i;
            }
        }
        for(i=0; i<=last; i++){
                dev[a[i]]=1;
        }
        for(i=0; i<=last; i++){
            if(dev[a[i]]>0)
            ans+=dev[a[i]];
            dev[a[i]]--;
        }
        for(i=1; i<100005; i++){
            dev[i]=0;
        }
    }
        cout<<ans<<endl;
    }
}