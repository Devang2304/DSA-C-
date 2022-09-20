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