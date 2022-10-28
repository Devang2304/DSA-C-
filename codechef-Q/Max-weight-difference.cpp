// https://www.codechef.com/problems/MAXDIFF

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n,k,sum1=0,sum2=0;
        cin>>n>>k;
        int  v[n] ;
        for (int i=0;i<n;i++) {
            cin>>v[i];
        }
        sort(v,v+n);
        if(k > n/2) 
        k = n - k;
        for(int i=0;i<k;i++)
        sum1+=v[i];
        for(int i=k;i<n;i++)
        sum2+=v[i];
        cout<<sum2-sum1<<endl;
    }
	return 0;
}
