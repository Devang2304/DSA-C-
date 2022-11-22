// first approach :
/*fhilal toh mapping se kiya hai Binary search se karne ke liye time nahi mila 
will add that along with tommorow's Q*/

class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        map<int,int> ans;
        int temp=0;
        for(auto it:nums){
            ans[it]++;
        }
        for(auto it:ans){
            if(it.second==1){
                temp=it.first;
            }
        }
        return temp;
    }
};