class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        string good="";
        int i=0;
        int n=words.size();
        bool flag=true;
        
        while(i<n){
            string word=words[i];
            string dup=chars;
            for(int j=0;j<word.length();j++){
                size_t found= dup.find(word[j]);
                if(found!=string::npos){
                    dup.erase(found,1);
                    flag=true;
                }
                else if(found==string::npos){
                    flag=false;
                    break;
                }
            }
            if(flag){
                good+=word;
            }
            i++;
        }
        cout<<good;
        return good.length();
        
    }
};