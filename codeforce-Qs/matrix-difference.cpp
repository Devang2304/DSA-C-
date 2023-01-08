#include <bits/stdc++.h>
using namespace std;
#define fo(i,n) for(i=0;i<n;i++)
constexpr char nl='\n';

void solve(){
    int i,j,k,n;
    cin>>n;
    int a=1,b=n*n;
    int arr[n][n];
    fo(i,n){
        if(i&1){
            for(int j=n-1;j>=0;j--){
                if(j&1){
                    arr[i][j]=a++;
                }
                else{
                    arr[i][j]=b--;
                }
            }
        }
        else{
            fo(j,n){
                if(j&1){
                    arr[i][j]=b--;
                }
                else{
                    arr[i][j]=a++;
                }
            }
        }
    }
    fo(i,n){
        fo(j,n){
            cout<<arr[i][j]<< " ";
        }
        cout << nl;
    }
}
int main(){
    int t = 1;
    cin >> t;
    while (t--){
       solve();
    }
    return 0;
}