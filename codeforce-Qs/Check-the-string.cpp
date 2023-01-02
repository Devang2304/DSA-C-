#include<bits/stdc++.h>
using namespace std;
bool check(string s){
        int a=0,b=0,c=0;
        if(s.length()<3) return false;
        if(s[0]!='a') return false;
        for(int i=0;i<s.length();i++){
 
            if(s[i]=='a'){
                a++;
                if(b>0) return false;
            }
            else if(s[i]=='b'){
                b++;
                if(c>0) return false;
            }
            else if(s[i]=='c'){
                c++;
            }
            else return false;
        }
        if(a==0 || b==0 || c==0) return false;
        if(c==a || b==c) return true;
        else return false;
    }
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string s;
    cin>>s;
    bool a=check(s);
        if(a==true) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    return 0;
}