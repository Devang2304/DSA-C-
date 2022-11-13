// using normal method:
// traversing through the array to check if the given element is greater than the next element
#include <bits/stdc++.h>
using namespace std;



class Solution {
  public:
    bool arraySortedOrNot(int arr[], int n) {
        int count=0;
        for(int i=0;i<n-1;i++){
            if(arr[i]>arr[i+1]){
                count++;
            }
        }
        if(count>0){
            return 0;
        }
        else{
            return 1;
        }
        
    }
};


int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        bool ans = ob.arraySortedOrNot(arr, n);
        cout << ans << "\n";
    }
    return 0;
}
