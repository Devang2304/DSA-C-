class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        
        sort(nums.begin(), nums.end());
        int count = 0;
        int ind = 0;
        
        while(ind != nums.size())
        {
            
            while(ind < nums.size() && nums[ind] == 0) ind++;
            
            int min = 0;
            if(ind != nums.size()) min = nums[ind];

            for(int i=ind;i<nums.size();i++) 
            {
                nums[i] = nums[i]-min;

                if(nums[i] < 0) nums[i] = 0;
            }  
            
            count++;
        }
        
        return count-1;
    }
};