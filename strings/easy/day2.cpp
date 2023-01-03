class Solution {
public:
    bool detectCapitalUse(string word) {
        int cnt=0;
        if(word.size()==1) return true;
         for(auto &it: word){
             if(it>='A' && it<='Z') cnt++;
         }
         if(cnt>=2 && cnt==word.size()) return true;
         else if(cnt==1 && (word[0]>='A' && word[0]<='Z') ) return true;
         else if(cnt==0 && word.size()>=1) return true;
         return false;
    }
};