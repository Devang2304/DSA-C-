//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
#define ll long long

int missingNumber(int a[], int n);

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int i=0, n;
		cin>>n;
		int a[n+5];
		for(i=0;i<n-1;i++)
			cin>>a[i];
			
		cout<<missingNumber(a, n)<<endl;
	}
}
// } Driver Code Ends


int missingNumber(int A[], int N)
{
    int n=0;
    int n2=0;
    int missing=0;
    for (int i = 1; i <=N; i++)
    {
        n+=i;
    }
    for (int i = 0; i <N-1; i++)
    {
        n2+=A[i];
    }
    missing=n-n2;
    return missing; 
}