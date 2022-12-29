//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// Using brute force approach
// compare the first element with the last element of the array if first 
// element is larger then it's rotated increase the count by 1
// esa continue karte jao jabtak array size 0 nahi hota
class Solution{
public:	
	int findKRotation(int arr[], int n) {
	    int i=0;
	    while(arr[i]>arr[n-1]){
	        i++;
	    }
	    return i;
	}

};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int a[n];
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.findKRotation(a, n);
        cout << ans << "\n";
    }
    return 0;
}

//using binary search approach 
// observation jaruri h dont just go with naive approach
//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	int findKRotation(int arr[], int n) {
	    int low=0;
	    int high=n-1;
	    int mid=0;
	    while(low<high){
	          mid=(low+high)>>1;
	        if(arr[mid]<arr[high]){
	            high=mid;
	        }
	        else{
	            low=mid+1;
	        }
	    }
	    return low;
	}

};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int a[n];
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.findKRotation(a, n);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends