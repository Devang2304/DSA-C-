//insertion sort concept used for shifting the elements as we want refer insertion sort algorithm if u dont
//understand but i fucked up its give TLE.

//https://leetcode.com/problems/rotate-array
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        while(k>0){
            int temp;
               temp=nums[nums.size()-1];
           for(int i=nums.size()-1;i>0;i--){
               nums[i]=nums[i-1];
           }
               nums[0]=temp;
             k--;
        }
    }
};

//2nd approach:
//bohot time laga hai pen paper pe kr lena khud se acchi understanding ayegi
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        vector<int> ans ;
        if(k > nums.size())
        k = k % nums.size() ;
        for(int i = nums.size() - k ; i <nums.size() ; i++ )
        {
            ans.push_back(nums[i]) ;
        }
        for(int i = 0 ; i < nums.size() - k ; i++)
        {
            ans.push_back(nums[i]) ;
        }
        
        nums = ans ;
    }
};

// 3rd approach: best optimal approach
//done with two pointer technique
class Solution {
    public :
    void reverse(vector<int>& nums, int i, int j){
        int li = i;
        int ri = j;
        
        while(li < ri){
            int temp = nums[li];
            nums[li] = nums[ri];
            nums[ri] = temp;
            
            li++;
            ri--;
        }
    }
    void rotate(vector<int>& nums, int k) {
        k = k % nums.size();
        if(k < 0){ 
            k += nums.size();
        }
        reverse(nums, 0, nums.size() - k - 1);
        reverse(nums, nums.size() - k, nums.size() - 1);
        reverse(nums, 0, nums.size() - 1);
    }
};