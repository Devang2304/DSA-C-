#include<bits/stdc++.h>
using namespace std;
void solve(){
int n;
        string s;
        cin>>n>>s;
        
        map<pair<char,char>,int> m;
        pair<char,char> prev ={s[0],s[1]};
        m[prev]++;

        for(int i=2;i<n;i++){
            pair<char,char> ab= {s[i-1],s[i]};

            if(m[ab]!=0){
                if((ab==prev && m[ab]>1)|| (ab!=prev)){
                    cout<<"YES"<<endl;
                    return;
                } 
        }
        prev=ab;
        m[ab]++;
    }
    cout<<"NO"<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}