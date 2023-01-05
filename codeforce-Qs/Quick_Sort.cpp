#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<ll> v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        ll cnt=0,k2=1;
        for(auto i:v){
            if(i==k2){
                cnt++;
                k2++;
            }
        }
        ll sort =n-cnt;
        if(sort%k==0){
            cout<<sort/k<<endl;
        }
        else{
            cout<<sort/k +1<<endl;
        }
    }
    return 0;
}