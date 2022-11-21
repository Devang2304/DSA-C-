class Solution {
public:
    int findMin(vector<int>& nums) {
        int s=0,e=nums.size()-1,mid;
        int min_val=INT_MAX;
        while(s<=e){
            if(nums[s]<nums[e]){
                min_val=min(min_val,nums[s]);
            }
            mid=s+(e-s)/2;
            
            if(nums[s]<=nums[mid]){
                min_val=min(min_val,nums[s]);
                s=mid+1;
            }
            else{
                min_val=min(min_val,nums[mid]);
                e=mid-1;
                
            }
            
        }
        return min_val;
    }
};