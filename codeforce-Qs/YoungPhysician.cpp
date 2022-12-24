#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
        int x,y,z;
        int Fx=0,Fy=0,Fz=0;
    while(t--){
        cin>>x>>y>>z;
        Fx+=x; Fy+=y; Fz+=z;
    }
    if(Fx==0 && Fy==0 && Fz==0)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    
    return 0;
}