#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;char c;
        cin>>n>>c;
        string s;
        cin>>s;
        s+=s;
        vector<int> v;
        for(int i=0;i<s.size();++i){
            if(s[i]=='g') v.push_back(i);
    }
    int j=0;
    int ans=0;
    for(int i=0;i<n;++i){
        if(s[i]==c){
            while (v[j]<i)
                j++;
                ans=max(ans,(v[j]-i));
        }
    }
    cout<<ans<<endl;
    }
    return 0;
}