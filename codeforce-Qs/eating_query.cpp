#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    ll t,n,q;
    int k;
    cin>>k;
    while(k--){
        cin>>n>>q;
        ll arr[n],tsum=0;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            tsum+=arr[i];
        }
        sort(arr,arr+n);
        vector<ll>sum;
        for(int i=0;i<n;i++){
            sum.push_back(tsum);
            tsum-=arr[i];
        }
        ll y;
        while (q--)
        {
            cin>>y;
            if(y>sum[0]){
                cout<<-1<<endl;
            }
            else if(y==sum[0]){
                cout<<n<<endl;
            }
            else{
                int i=0,j=n-1;
                while(i<j){
                    int k= (i+j)>>1;
                    if(sum[k]>y){
                        i=k+1;
                }
                else if(sum[k]==y){
                    i=k;
                    break;
                }
                else{
                    j=k;
                }
            }
            if(sum[i]>=y){
                cout<<n-i<<endl;
                continue;
            }
            cout<<n-i+1<<endl;
        }
        
    }
    }
    return 0;
}