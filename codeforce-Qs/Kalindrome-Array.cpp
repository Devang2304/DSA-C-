#include<bits/stdc++.h>
using namespace std;

void solve() {
    int N;
    cin >> N;
    vector<int>a(N);
    for (int i=0;i<N;++i){
        cin>>a[i];
    }
    int l=0,r=N-1;
    while(l<r && a[l]==a[r]){
        ++l;
        --r;
    }
    if(l>=r){
        cout<<"YES"<<endl;
        return;
    }
    for(int x:{a[l], a[r]}){
        vector<int>b;
        for(int i:a){
            if(i!=x){
                b.push_back(i);
            }
        }
        bool kalindrome=true;
        for (int i=0;i<b.size()/2;++i) {
            if (b[i]!= b[b.size()-1-i]) {
                kalindrome=false;
                break;
            }
        }
        if (kalindrome) {
            cout<<"YES"<<endl;
            return;
        }
    }
    cout<<"NO"<<endl;
}
 
int main() {
    ios::sync_with_stdio(false);
    int t; cin>>t;
    while (t--) solve();
    return 0;
}