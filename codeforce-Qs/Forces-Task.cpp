#include<bits/stdc++.h>
using namespace std;
#define ll long long

// problem : MKnez's-ConstructiveForces-Task.cpp

int main(){
    ios_base::sync_with_stdio(false);
    ll t,n,i,j,a,b,m;
    cin>>t;
    while(t--){
        cin>>n;
        if(n==3){
            cout<<"NO"<<endl;
            continue;
        }
        cout<<"YES"<<endl;

        if(n%2==0){
            for(int i=1;i<=n;i+=2){
                cout<<"2 -2 ";
            }
        }
        else{
            m=n-2;
            a=-(m/2);
            b=(m+1)/2;

            for(int i=1;i<=n/2;i++){
                cout<<a<<" "<<b<<" ";
                }
            cout<<a;
        }
        cout<<endl;
    }
    return 0;
}