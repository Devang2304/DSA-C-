//https://leetcode.com/problems/move-zeroes/

//first approach:
//this the firswt approach i came up with ig evryone will came up with this method
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