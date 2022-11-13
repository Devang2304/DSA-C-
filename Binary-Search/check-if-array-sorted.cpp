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

// method two using binary search algorithm
// bc esko TLE dikha raha hai binary search se kiya toh

#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    bool arraySortedOrNot(int arr[], int n) {
        int s=0,count=1;
        int e=n-1;
        int mid=s+(e-s)/2;
        while(s<e){
            
            if(n==1){
                return 1;
            }
            else if(arr[mid]>=arr[0]){
                s=mid+1;
            }
            else{
                count=0;
                e=mid;
            }
            mid=s+(e-s)/2;
        }
        if(count==1){
            return 1;
        }
        else{
            return 0;
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
