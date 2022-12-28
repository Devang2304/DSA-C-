#include<bits/stdc++.h>
using namespace std;
int main(){
    int n=0,m=0;
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    cin>>n>>m;
    if(n>m){
        for (int i = 0; i < m; i++)
        {
            cout<<"BG";
        }
        
        for (int i = m; i < n; i++)
        {
            cout<<"B";
        }
    }
        else{
        for (int i = 0; i <n; i++)
        {
            cout<<"GB";
        }
        for (int i = n; i < m; i++)
        {
            cout<<"G";
        }
    }
        return 0;
}