//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	
	int reverse(int arr[],int i,int j){
	    int l=i;
	    int r=j;
	    int temp=0;
	   
	    while(l<r){
	        temp=arr[l];
	        arr[l]=arr[r];
	        arr[r]=temp;
	        l++;
	        r--;
	    }
	    
	}
	
	public:
	void leftRotate(int arr[], int k, int n) 
	{ 
	    k=k%n;
	    if(k<0){
	        k+=n;
	    }
        reverse(arr,0,k-1);
        reverse(arr,k,n-1);
        reverse(arr,0,n-1);
	}
	
		 

};

//{ Driver Code Starts.

int main() 
{
   	
   
   	int t;
    cin >> t;
    while (t--)
    {
    	int n;
	    cin >> n;
	    int k;
	    cin >> k;
	    int a[n];
	    for(int i = 0;i<n;i++){
	        cin >> a[i];
	        // um[a[i]]++;
	    }


       

        Solution ob;
        ob.leftRotate(a,k,n);
        
        for (int i = 0; i < n; i++) 
        	cout << a[i] << " "; 

	    cout << "\n";
	     
    }
    return 0;
}



// } Driver Code Ends