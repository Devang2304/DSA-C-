#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
    ll n;
    cin>>n;
    vector<ll> v(n);
    for(ll i=0;i<n;i++){
        cin>>v[i];
    }
    for(ll i=0;i<n;i++){
        v[i] -= i;
    }
    ll count=0;
    map<ll,ll> mp;
    for(ll i=0;i<n;i++){
        mp[v[i]]++;
    }
    for(auto x:mp){
        if(x.second>1)
        count += (x.second*(x.second-1))/2;
    }
    if(count!=0)
    cout<<count<<endl;
    else cout<<0<<endl;
    }
}