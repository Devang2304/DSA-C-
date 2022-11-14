class Solution {
public:
     int findPeakElement(const vector<int> &num) 
    {
        int l = 0;
        int h = num.size()-1;
        
        while(l < h)
        {
            int mid1 = (l+h)/2;
            int mid2 = mid1+1;
            if(num[mid1] < num[mid2])
                l = mid2;
            else
                h = mid1;
        }
        return l;
    }
};