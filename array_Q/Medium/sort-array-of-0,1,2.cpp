//using insertion sort
class Solution {
public:
    void sortColors(vector<int>& nums) {
       for(int i=1;i<nums.size();i++){
         int temp=nums[i];
         int j=i-1;
         while(j>=0 && nums[j]>temp){
             nums[j+1]=nums[j];
             j--;
         }
         nums[j+1]=temp;
     }
        
    }
};

//using selection sort
class Solution {
public:
    void sortColors(vector<int>& nums) {
     for(int i=0;i<nums.size()-1;i++){
        int minIndex=i;
        for(int j=i+1;j<nums.size();j++){
            if(nums[j]<nums[minIndex])
                minIndex=j;
        }
        swap(nums[minIndex],nums[i]);
    }
        
    }
};

//using bubble sort
for(int i=1;i<n;i++){
            for(int j=0;j<n-i;j++){ // decreases the checking of the element which is already sorted
                if(arr[j]>arr[j+1]){
                    swap(arr[j],arr[j+1]);
                }
            }
        }