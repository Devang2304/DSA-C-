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
    int num;
    cin>>num;
    vector<int>prime_factors;

    while (num>1)
    {
        int prime_factors=hp[num];
        while (num% prime_factors==0)
        {
            num/= prime_factors;
            prime_factors.push_back(prime_factors);
        }
        
    }
    for (auto &&factor : prime_factors)
    {
        cout<<factor<<" "<<endl;
    }
    
    
}