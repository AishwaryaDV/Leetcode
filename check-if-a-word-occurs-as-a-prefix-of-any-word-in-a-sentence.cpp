class Solution {
public:
    int isPrefixOfWord(string sentence, string searchWord) {
        int len=searchWord.length();
        vector<string>vec;
        int index=-1;
        stringstream ss(sentence);
        string word;
        while(ss>>word){
            vec.push_back(word);
        }

        for(int i=0;i<vec.size();i++){
            string str=vec[i].substr(0,len);
            if(str==searchWord){
                index=i+1;
                break;
            }
        }
        return index;

    }
};