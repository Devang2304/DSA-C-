//https://practice.geeksforgeeks.org/problems/second-largest
#include <bits/stdc++.h>
using namespace std;
class Solution{
public:	
	int print2largest(int arr[], int n) {
	    int max1=0;
	    for(int i=0;i<n;i++){
	        if(max1<arr[i]){
	            max1=arr[i];
	        }
	    }
	    int second_max=-1;
	    for(int i=0;i<n;i++){
	        if(arr[i]!=max1 && arr[i]>second_max){
	            second_max=arr[i];
	        }
	    }
	    return second_max;
	}

int print2largest_approach(int arr[], int n) {
    //using STL function i.e -max(number1,number2) gives the max number
    int max1=0;
    int first_max;
    for(int i=0;i<n;i++){
        first_max=max(max1,arr[i]);
    }
    int max2=0;
    int second_max;
    for(int i=0;i<n;i++){
        if(arr[i]!=first_max){
            second_max=max(max2,arr[i]);
        }
    return second_max;

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
        auto ans = ob.print2largest(arr, n);
        cout << ans << "\n";
    }
    return 0;
}
