#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        // vector<int> b;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
        }
        auto b=a;
        sort(b.begin(), b.end());
        int win=0;
        for (int i = 0; i < n && b[i]<=m; i++)
        {
            m-=b[i];
            ++win;
        }
        if(win==n)  cout<<"1\n";
        else if(win==0) cout<<n+1<<"\n";
        else{
            if(m+b[win-1] >= a[win])  ++win;
 
            cout<<n+1-win<<"\n";
            
        }
    }
}
 