/*if you know stl that is standard template library in c++ then this Q
then this Q is very easy for you.

In this solution i have used **Set function** of the STL library which removes the same (repeating)
element from the vector/array and directly arrange the elements in the ascending order
This is the speciality of the Set function of c++

firstly I took the elements of arr1 then took elements of arr2 then set function did his work and return it by 
converting into vector.
*/

//Union of Two Sorted Arrays

#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
    vector<int> findUnion(int arr1[], int arr2[], int n, int m)
    {
        set<int>s;
        for(int i=0;i<n;i++){
            s.insert(arr1[i]);
        }
        for(int i=0;i<m;i++){
            s.insert(arr2[i]);
        }
        vector<int> answer(s.begin(),s.end());
        return answer;
    }
};

int main() {
	
	int T;
	cin >> T;
	
	while(T--){
	    
	    
	    
	    int N, M;
	    cin >>N >> M;
	    
	    int arr1[N];
	    int arr2[M];
	    
	    for(int i = 0;i<N;i++){
	        cin >> arr1[i];
	    }
	    
	    for(int i = 0;i<M;i++){
	        cin >> arr2[i];
	    }
	    Solution ob;
	    vector<int> ans = ob.findUnion(arr1,arr2, N, M);
	    for(int i: ans)cout<<i<<' ';
	    cout << endl;
	    
	}
	
	return 0;
}