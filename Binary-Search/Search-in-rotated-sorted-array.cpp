// first approach - using linear search
class Solution {
public:
    int search(vector<int>& nums, int target) {
        for(int i=0;i<nums.size();i++)
    {
        if(nums[i]==target)
            return i;
    }
        return -1;
    }
};

// second approach - 
/*
find the mid of the array that is the pivot element of the array then check if the given element is
matching with target element or not if yes then return the mid element else do BS in left hand side of 
array if not found do BS in right hand side of array agar vaha bhi nahi mila then return -1
*/

// right now got the approach will code it later busy right now.