#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int count[n+5]={};
        int a[n+5]={};
        for(int i=1;i<=n;i++){
            cin>>a[i];
            count[a[i]]++;
        } 
        int k=0;
            for (int j = 0; j <= n; j++)
            {
                if(count[j]>0){
                    k++;
                }
            }
            if(k==2){
                cout<<n/2+1<<endl;
            }
            else{
                cout<<n<<endl;
            }
           
    }
    return 0;
}