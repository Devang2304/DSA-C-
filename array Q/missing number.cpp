//First Apporach:
/*
First approach toh sabka same hi hone vala hai
In first approach,i created an new array and stored all the elements from 0 to N,then run for loop 
nested for loop in it for comparing the elements of new array and the nums vala vector but Q mein
already mentioned kiya ki they want O(1) or O(N) time complexity which i did not obeyed resulting in
O(n2) time complexity which gives me TLE
*/

// 2nd approach
/*
yeh approach ekdam basic hai tbh, firstly hum jitna nums vector ka count hai utnetak for loop run karege
and then i ko ek variable mei add kr denge like....1 2 3 4 5 6 till less than equal to nums ka count
and then run another separate for loop where you will be subtracting the elements of the nums vector from the sum
so jo element missing hoga voh subtract nahi hoga and we will get our answer
*/
//https://leetcode.com/problems/missing-number/
class Solution {
public:
int missingNumber(vector<int>& nums){
    int n=0;
    for (int i = 0; i <=nums.size(); i++)
    {
        n+=i;
    }
    for (int i = 0; i < nums.size(); i++)
    {
        n-=nums[i];
    }
    return n;
    }
};
