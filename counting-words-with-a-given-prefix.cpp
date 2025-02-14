class Solution {
public:
    int prefixCount(vector<string>& words, string pref) {
        int n=pref.length();
        int counter=0;
        for(int i=0;i<words.size();i++){
            string word=words[i];
            string s=word.substr(0,n);
            if(s==pref){
                counter++;
            }
        }
        return counter;
        
    }
};