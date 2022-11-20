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

class Solution {
public:
    int search(vector<int>& nums, int target) {
       int s=0,e=nums.size()-1;

       while (s<=e)
       {
        int mid = (s+e) >>1;
        if(nums[mid]==target){
            return mid;
        }
        if(nums[s]<=nums[mid]){
            if(nums[s]<=target &&  nums[mid]>=target){
            e=mid-1;
        }
        else{
            s=mid+1;
        }
        }
        else{
            if (nums[mid]<=target && target<=nums[e])
            {
                s=mid+1;
            }
            else{
                e=mid-1;
            }
            
        }
       }
       return -1;
       
    }
};