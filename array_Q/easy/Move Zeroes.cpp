//https://leetcode.com/problems/move-zeroes/

//first approach:
//this the first approach i came up with ig evryone will came up with this method
//but unfortunately its giving time limit exceed becuz of O(n2) [ 1 for loop and while loop nested in it]
//I am working on the best approach let see
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        for(int i=0;i<nums.size();i++){
            int pos,temp;
            if(nums[i]==0){
                int temp=nums[i];
                pos=i;
            }
            int count=nums.size()-pos;
            int j=0;
            for(;j<nums.size();j++){
                while(count-pos>0){
                    nums[j]=nums[j+1];
                }
            }
            nums[nums.size()-1]=temp;
        }
    }
};


//gfg soln optimal solution using two pointers
//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:
	void pushZerosToEnd(int arr[], int n) {
	    int j=0;
	    for(int i=0;i<n;i++){
	        if(arr[i]!=0){
	            arr[j]=arr[i];
	            j++;
	        }
	    }
	    for(;j<n;j++){
	        arr[j]=0;
	    }

	}
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int arr[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        ob.pushZerosToEnd(arr, n);
        for (i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends