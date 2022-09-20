//bruteforce approach:
// can be solved with mapping but merko kantala aa gaya
vector<int> twoSum(vector<int>& nums, int target) {
    vector<int> result;
    for (int i = 0; i < nums.size(); ++i) {
   	 for (int j = i + 1; j < nums.size(); ++j) {
   		 if (nums[i] + nums[j] == target) {
   			 result.emplace_back(i);
   			 result.emplace_back(j);
   			 break;
   		 }
   	 }
   	 if (result.size() == 2)
   		 break;
    }
    return result;
}

// if you don't know what is emplace_back(variable) then refer-
//https://cplusplus.com/reference/vector/vector/emplace_back/