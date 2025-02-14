class Solution {
public:
    int lengthOfLastWord(string s) {
        int count=0;
        vector<string>words;
        istringstream ss(s);
        string word;
        while(ss>>word){
            words.push_back(word);
        }
        reverse(words.begin(),words.end());
        count=words[0].length();
       
        return count;
        
    }
};