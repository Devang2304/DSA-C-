#include<bits/stdc++.h>
using namespace std;
void solution(){
    int n;
    int k;
    int x;
    cin>>n;
    map<int,int> mp;
    vector<int>a[n];
    for (int i = 0; i < n; i++) {
        cin>>k;
        for (int j = 0; j < k; j++) {
            cin>>x;
            a[i].push_back(x);
            mp[x]++;
        }
    }
    for (int i = 0; i < n; i++) {
        bool yes=true;
        for (auto it :a[i]) {
            if(mp[it]<2){
                yes=false;
            }
        }
        if(yes){cout<<"YES";
        return;
        }
    }
    cout<<"NO";
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solution();
        cout<<"\n";
    }
    return 0;
}