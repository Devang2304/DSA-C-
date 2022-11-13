// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

// Q -https://leetcode.com/problems/first-bad-version/
class Solution {
public:
    int firstBadVersion(int n) {
        int low = 1;
        int high = n;
        while(true){
            int mid = low + (high - low)/2;
             if((mid==n or mid==1) and isBadVersion(mid)==true) return mid;
            else if((isBadVersion(mid) == false) and (isBadVersion(mid+1) == true)) return mid+1;
            else if(isBadVersion(mid) == false) low = mid+1;
            else high = mid-1;
        }
    }
};