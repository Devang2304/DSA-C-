class Solution {
public:
    int minimumRounds(vector<int>& tasks) {
        unordered_map<int,int> m;
        for(int i=0;i<tasks.size();i++){
            m[tasks[i]]++;
        }
        int cnt=0;
        for(auto fre:m){
            if(fre.second==1){
                return -1;
            }
            else if(fre.second%3==0){
                cnt+=fre.second/3;
            }
            else{
                cnt+=fre.second/3+1;
            }
        }
        return cnt;
    }
};