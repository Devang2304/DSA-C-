//https://leetcode.com/problems/remove-duplicates-from-sorted-array

//approach 1-
//simply overwriting the repeating element with the same one as you can understand from the code
//storage taken was 75% better than all but time taken was 25% better than all
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
       int c=0;
        for(int i=1;i<nums.size();i++){
            if(nums[c]!=nums[i]){
                c++;
            }
                nums[c]=nums[i];
        }
        return c+1;
    }
};

//approach 2:
// Using STL functions of C++ where everything is made easy though merko yeh click nahi hua UNIQUE function use karna
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        return distance(begin(nums), unique(begin(nums), end(nums)));
    }
};
