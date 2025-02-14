class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        vector<string>ans;
        string word;
        int r1,r2,r3=0;
        string first="qwertyuiopQWERTYUIOP";
        string sec="asdfghjklASDFGHJKL";
        string third="zxcvbnmZXCVBNM";
        for(int i=0;i<words.size();i++){
            word=words[i];
            r1=0;r2=0;r3=0;
            for(int j=0;j<word.size();j++){
                if(first.find(word[j])!=std::string::npos)
                    r1++;
                else if(sec.find(word[j])!=std::string::npos)
                    r2++;
                else
                    r3++;
            }
            if(r1==word.size()||r2==word.size()||r3==word.size())
                ans.push_back(word);
        }
        return ans;
    }
};