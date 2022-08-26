#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for (int i = 0; i <= n; i++)
    {   int k=1;
        for (int j =i; j>0; j--)
        {
            cout<<k;
            k++;
        }
        k=0;
        cout<<"\n";
    }
    
    return 0;
}