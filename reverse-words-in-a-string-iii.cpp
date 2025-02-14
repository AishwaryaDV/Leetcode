class Solution {
public:
    string reverseWords(string s) {
        string word;
        string ans;
        stringstream ss(s);
        while(ss>>word){
            reverse(word.begin(),word.end());
            ans+=word+' ';
        }
        ans.erase(ans.length()-1,' ');
        
        return ans;
        
    }
};