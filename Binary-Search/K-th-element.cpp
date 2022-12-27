#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m,k;
    cin>>n>>m>>k;
    int a[n],b[m];
    for (int i = 0; i < n; i++) cin>>a[i];
    for (int i = 0; i < m; i++) cin>>b[i];

    int t[n+m];
    int length = 0;
    for (int i = 0; i < n; i++)
    {
        t[length] = a[i];
        length++;
    }
    for (int i = 0; i < m; i++)
    {
        t[length] = a[i];
        length++;
    }
    sort(t,t+(n+m));
    cout<<t[k-1]<<endl;
    
    return 0;
}