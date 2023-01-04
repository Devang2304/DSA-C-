#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    int t;
    cin>>t;
    while(t--){
        int n,m,Sx,Sy,d;
        cin>>n>>m>>Sx>>Sy>>d;
        if(Sx-d>1 && Sy+d<m){
            cout<<n+m-2<<"\n";
        }
        else if(Sy-d>1 && Sx+d<n){
            cout<<n+m-2<<"\n";
        }
        else{
            cout<<-1<<"\n";
        }
    }
    return 0;
}

// TC = O(T)
// T= test cases