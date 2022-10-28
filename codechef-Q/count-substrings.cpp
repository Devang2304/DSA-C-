//https://www.codechef.com/problems/CSUB
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        long int ma=0;
        for(int i=0;i<n;i++){
            if(s[i]=='1'){
                    ma++;
                }
        }
        cout<<ma*(ma+1)/2<<endl;
    }
	return 0;
}
