#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int n=s.size();
       if(s[0]==s[n-1]){
        cout<<s[0]<<" ";
        for(int i=1; i<n-1; i++) cout<<s[i];
        cout<<" "<<s[n-1]<<endl;
        }
        else{
            for(int i=0; i<n; i++){
                for(int j=n-1;j>i+1;j--){
                    string a=s.substr(0,i+1);
                    string b=s.substr(i+1,j-i-1);
                    string c=s.substr(j,(n-j));
                    if((a<=b && c<=b) || (b<=a && b<=c)){
                        cout<<a<<" "<<b<<" "<<c<<endl;
                        break;
                    }
                }
                break;
            }
        }
    }
    return 0;
}