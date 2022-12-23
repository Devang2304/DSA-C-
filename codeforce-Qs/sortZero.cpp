#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        int cnt=0;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++) cin>>arr[i];
        for (int i = 0; i < n-1; i++)
        {
            for (int j =0; j < n-i-1; j++)
            {
                if(arr[j]>arr[j+1])
                swap(arr[j],arr[j+1]);
                cnt++;
            }
            
        }
        cout<<cnt<<endl;
    }
    return 0;
}