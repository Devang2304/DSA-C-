// question link -https://leetcode.com/problems/find-pivot-index/
class Solution {
public:
int pivotIndex(vector<int>& nums) {
int sum=0;
int leftsum=0;
for (int i = 0; i < nums.size(); i++)
{
    sum+=nums[i];
}
for (int i = 0; i < nums.size(); i++)
{
    if (leftsum==sum-leftsum-num[i])
    {
        return i;
    }
    else
    {
        leftsum+=nums[i];
    }
    
}
}
}; 