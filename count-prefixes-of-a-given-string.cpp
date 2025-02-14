class Solution {
public:
    int countPrefixes(vector<string>& words, string s) {
        int cnt=0;
        for(auto word:words){
            bool prefix=true;
            for(int i=0;i<word.length();i++){
                if(word[i]!=s[i]){
                    prefix=false;
                    break;
                }
            }
            if(prefix)
                cnt++;
        }
        return cnt;
        
    }
};