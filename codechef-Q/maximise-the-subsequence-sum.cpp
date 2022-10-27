// https://www.codechef.com/submit/SIGNFLIP
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int n,k,x,psum=0,nsum=0;
        cin>>n>>k;
        vector<int>v;
        for(int i=0;i<n;i++){
            cin>>x;
            if(x>=0){
                psum+=x;
            }
            else{
                v.push_back(x);
            }
        }
            sort(v.begin(),v.end());
            for(int i=0;i<k and x<v.size();i++){
                nsum+=v[i];
        }
        cout<<max(psum,psum-nsum)<<endl;
    }
    return 0;
} 