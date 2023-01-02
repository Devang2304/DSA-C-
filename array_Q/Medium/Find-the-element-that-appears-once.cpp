#include <bits/stdc++.h>
using namespace std;
//using hashing technique
class Solution{
public:	
	int search(int A[], int N){
	    unordered_map<int,int> m;
	    for(int i=0;i<N;i++){
	        m[A[i]]++;
	    }
	    for(int i=0;i<N;i++){
	        if(m[A[i]]==1)
	        return A[i];
	    }
	    
	}
};
int main()
{
    int t,len;
    cin>>t;
    while(t--)
    {
        cin>>len;
        int arr[len];
        for(int i=0;i<len;i++){
            cin>>arr[i];
        }
        Solution ob;
        cout<<ob.search(arr, len)<<'\n';
    }
    return 0;
}
