/*this method is used to find the primed number from ther certain
range buy excluding all the numbers which are divisible by the number from
1 to 9 the excludation of the numbers to find the prime numbers present
in that range is called as Sieve of Eratosthenes
*/
// if we use the normal method of the finding the prime numbers we will get time
// limit exceeded so to avoid that we use this method

class Sieve of Eratosthenes
{
private:
    /* data */
public:
int cnt =0;
vector<bool> prime(n+1,true);

prime[0]=prime[1]=false;
for (int i = 2; i < n; i++)
{
    if (prime[i])
    {
        cnt++;
        for (int  j = 2*i; j < n; j=j+1)
        {
            prime[j]=0;
        }
        
    }
    return cnt;
}

};


//coded by myself
#include<bits/stdc++.h>
using namespace std;

const it N=1e7+10;
vector<bool>isPrime(N,1);

int main(){
    isPrime[0]=isPrime[1]=false;
    for (int i = 0=2; i < N; i++)
    {
       if (isPrime[i]==true){
        for (int j = 2*i; j < N; j+=i){
            isPrime[j] = false;
        }
       }
       
       
    }
    for (int i = 1; i < 100; i++)
    {
        cout<<isPrime[i]<<endl;
    }
    
}










//normal method :
class Sieve of isprime
{
private:
    bool isPrime(int n){
        if (n<=1)
        {
            return false;
        }
        for (int i = 2; i < n; i++)
        {
            if (n%i == 0)
            {
                return false;
            }
            
        }
        return true;
        
        
    }
public:
int countPrimes(int n){
    int cnt =0;
    for (int i = 2; i < n; i++)
    {
 if (isPrime(i))
        {
            cnt++;
        }}
    
}
};
