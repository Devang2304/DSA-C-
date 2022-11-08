#include<bits/stdc++.h>
using namespace std;

void solve(vector<int>&a,vector<int>&b){
    int n=a.size();
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    reverse(b.begin(),b.end());
    int result=a[0]+b[0];
    for (int i = 1; i < n; i++) {
        result=max(result,a[i]+b[i]);
    }
    std::cout << result << std::endl;
}

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        std::vector<int>a(n),b(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n;i++){
            cin>>b[i];
        }
        solve(a,b);
    }
	return 0;
}
