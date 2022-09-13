// I tried doing using insertion sort but it give TLE and then did it using  swapping but it still TLE
//So here is the solution in this solution what i have done is first taking all the non-zero elements first then 
//whatever elements space is remaining is replaced by the zeros
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
     int zero=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=0){
                nums[zero++]=nums[i];
            }
        }
        for(int i=zero;i<nums.size();i++){
            nums[i]=0;
        }
    }
};
