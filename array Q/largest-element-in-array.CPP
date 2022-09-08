// https://practice.geeksforgeeks.org/problems/largest-element-in-array
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int largest_approach1(vector<int> &arr, int n)
    {
        // O(n) time complexity 
        //not that good since it will take more time and will check it with every element
        int max=0;
        for(int i=0;i<arr.size();i++){
            if(arr[i]>max){
                max=arr[i];
            }
        }
        return max;
    }
    int largest_approach2(vector<int> arr, int n){
        // o(log(n)) time complexity used which is much better than the O(n)
        //sorting algorithm used in this is merge sort which is the best among all sorting algorithm
        sort(arr.begin(),arr.end());
        return arr[n-1];
    }
};

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int>arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        Solution ob;
        cout << ob.largest(arr, n) << "\n";
    }
    return 0;
}