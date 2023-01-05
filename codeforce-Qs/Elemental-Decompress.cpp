#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        int x[n+1];
        int y[n+1];
        int p=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            x[i+1]=-1;
            y[i+1]=-1;
        }
        int p1[n];
        int p2[n];
        for(int i=0;i<n;i++){
            p1[i]=0;
            p2[i]=0;
        }
        set<int> s1,s2;
        for(int i=0;i<n;i++){
            if(x[a[i]]==-1){
                x[a[i]]=i;
                p1[i]=a[i];
            }
            else if(y[a[i]]==-1){
                y[a[i]]=i;
                p2[i]=a[i];
            }
            else p=1;
        }
        if(p==1){
            cout<<"NO"<<endl;
            continue;
        }
        for(int i=0;i<n;i++){
            if(x[i+1]==-1) s1.insert(i+1);
            if(y[i+1]==-1) s2.insert(i+1);
        }
        for(int i=0;i<n;i++){
            if(p1[i]==0){
                auto it=s1.upper_bound(p2[i]);

                if(it==s1.begin()){
                    p=1;
                    break;
                }
                else{
                    it--;
                    p2[i]=*it;
                    s2.erase(it);
                }
            }
        }
        if(p==1){
            cout<<"NO"<<endl;
            continue;
        }
        cout<<"YES"<<endl;
        for(int i=0;i<n;i++){
            cout<<p1[i]<<" ";
        }
        cout<<"\n";
        for(int i=0;i<n;i++){
            cout<<p2[i]<<" ";
        }
    }
    return 0;
}