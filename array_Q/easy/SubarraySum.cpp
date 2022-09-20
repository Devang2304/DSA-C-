//first Approach:
//do it with pen and paper pretty easy
//but i fucked up it passes the first test case and for other test cases it gives TLE

class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int temp=0;
        int i=0;
        int counter=0;
        int n=nums.size();
        int sum=0;
        while(n-1!=i){
            sum=0;
            for(;i<n;i++){
                sum+=nums[i];
                if(sum==k){
                    temp=i;
                    counter++;
                    break;
                }
            }
            i=temp;
        }
        return counter;
    }
};

//2nd approach:
//using maps pretty easy 
class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int> mp; 
        int count = 0 , sum = 0; 
        mp[sum] = 1;
        for(auto i : nums){
            sum = sum + i; 
            if(mp.find(sum - k) != mp.end()){
                count = count + mp[sum - k];
            }
            mp[sum]++;
        }
        return count;
    }
};