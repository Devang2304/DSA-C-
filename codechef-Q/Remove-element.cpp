#include <bits/stdc++.h>
using namespace std;

int main() {
int t;
cin>>t;
while(t--){
    int n,k;
    cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);
    if(n==1){
        std::cout << "yes" << std::endl;
    }
    else{
        if(a[0]+a[n-1]<=k){
            std::cout << "yes" << std::endl;
        }
        else{
            std::cout << "no" << std::endl;
        }
    }
}
	return 0;
}
