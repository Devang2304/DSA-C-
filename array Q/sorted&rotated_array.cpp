 /*This was the first solution I came up with without properly reading the question
though my logic this solution is right if you run it on the local ide,its giving the buffer 
overflow wala error becuz i  have not used the modulus function
*/
//https://leetcode.com/problems/check-if-array-is-sorted-and-rotated
//Approach 1:
class Solution {
public:
    bool check(vector<int>& nums) {
        int long long c1=0,c2=0;
        int long long breaking_point=0;
        int long long i=0;
        int long long j;
        for(;nums[i]<=nums[i+1];i++){
                c1=1;    
        }
        breaking_point=i;
        for(int j=breaking_point;j<=nums.size();j++){
            if(nums[j]<=nums[j+1]){
                c2=1;
            }
        }
        if(c1==1 && c2==1){
            return true;
        }
        else{
            return false;
        }
        
    }
};

//Approach 2:after checking the question properly.
class Solution {

    bool sorted(vector<int>& nums) {
        int n = nums.size();
        
        int cnt = 0; 
        for(int i = 0; i<n; i++){
            if(nums[i]> nums[(i + 1)%n]) cnt++; 
        }
        
        if(cnt == 0 or cnt == 1) return true;
        return false;
    }
public:
    bool check(vector<int>& nums) {
        return sorted(nums);
    }
};

//Approach 3: most recommendableand optimal optimal solution recommended to use pen paper for better understanding
//Even though after using the data I got the question correct but its time  taken and solution was just 5% ahead of the
//users
class Solution {

    bool sorted(vector<int>& nums) {
        int n = nums.size();
        
        int cnt = 0; 
        for(int i = 1; i<n; i++){
            if(nums[i - 1] > nums[i]) cnt++; 
        }
        
                                 
         if(nums[n-1] > nums[0]) cnt++;
                                 
        if (cnt == 0 or cnt == 1)  return true ;
            
        return false;
    }
public:
    bool check(vector<int>& nums) {
        return sorted(nums);
    }
};