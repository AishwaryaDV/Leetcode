class Solution {
public:
    vector<string> splitWordsBySeparator(vector<string>& words, char separator) {
        vector<string>strings;
        for(int i=0;i<words.size();i++){
            string word=words[i];
            cout<<word<<" ";
            string temp="";
            for(int j=0;j<word.length();j++){
                if(word[j]==separator && temp!=""){
                    strings.push_back(temp);
                    temp="";
                }
                if(word[j]!=separator){
                    temp+=word[j];
                }
            }
            if(!temp.empty()){
                strings.push_back(temp);
            }
        }
        return strings;
        
    }
};