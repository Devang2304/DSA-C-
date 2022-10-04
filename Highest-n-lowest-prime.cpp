#include<bits/stdc++.h>
using namespace std;
int main(){
    isPrime[0]=isPrime[1]=false;
    for(int i=2;i*i<=n;i++){
        if (isPrime[i]==true){
        {
            lp[i]=hp[i]=false;
            for (int j =2*i; j < n; j+=i)
            {
                isPrime[j] = false;
                hp[j]=i;
                if (lp[j]==0)
                {
                    lp[j]=i;
                }
                
            }
            
        }
        for (int i = 1; i < 100; i++)
        {
            cout<<lp[i]<<" "<<hp[i]<<endl;
        }
        
    }
}