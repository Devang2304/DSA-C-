#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n=0;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    bool yes = false;
    for(int i=0;i<n-1;i++){
        if(a[i]!=a[i+1]){
            yes= true;
            break;
        }
    }
    if(!yes){
        cout<<"NO"<<endl;
        return;
    }
    else{
        cout<<"YES"<<endl;
        int l=0;
        int r=n-1;
        while(l<r){
            cout<<a[l]<<" ";
            cout<<a[r]<<" ";
            l++;r--;
        }
       if(n%2!=0) cout<<a[l]<<" ";  
       cout<<endl;
    }
}
int main(){
    int t,i;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}