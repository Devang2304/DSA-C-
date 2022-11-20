class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int pvt_idx=-1,start=0,end=nums.size()-1;
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]>nums[i+1]){
                pvt_idx=i;
                break;
            }
        }
        if(pvt_idx!=-1){
            end=pvt_idx;
            while(start<=end){
                int mid=(start+end)>>1;
                if(nums[mid]==target){
                    return true;
                }
                else if(nums[mid]>target) end=mid-1;
                else start=mid+1;
            }
        }
        start=pvt_idx+1;
        end=nums.size()-1;
        while(start<=end){
            int mid=(start+end)>>1;
            if(nums[mid]==target){
                return true;
            }
            else if(nums[mid]>target) end=mid-1;
            else start=mid+1;
        }
        return false;
    }
};