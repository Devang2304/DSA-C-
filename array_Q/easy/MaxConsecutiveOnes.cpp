// https://leetcode.com/problems/max-consecutive-ones/
// 1st approach or TLE vala approach
class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int i=0,counter=0,maxC=0;;
            for(;i<nums.size();i++){
                if(nums[i]!=0 && nums[i]==1) counter++;
                else counter=0;
                maxC=max(counter,maxC);
        }
        return maxC;
    }
};
