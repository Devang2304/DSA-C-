#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    int t;
    cin>>t;
    while(t--){
        int r,g,b;
        cin>>r>>g>>b;
        int total =(r+g+b)/2;
        int ans=min(total,(r+g));
        ans=min(ans,(b+g));
        ans=min(ans,(r+b));
        cout<<ans<<endl;
    }
    return 0;
}