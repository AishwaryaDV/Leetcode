class Solution {
public:
    bool isAcronym(vector<string>& words, string s) {
        string acro="";
        for(int i=0;i<words.size();i++){
            string word=words[i];
            acro+=word[0];
        }
        if(acro==s)
            return true;
        else
            return false;
        
    }
};