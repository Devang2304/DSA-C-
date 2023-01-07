class Solution {
public:
    int xorBeauty(vector<int>& nums) {
        int Xor=0;
        for(auto num:nums){
            Xor^=num;
        }
        return Xor;
    }
};