class Solution {
public:
    bool isPalindrome(string s) {
        if(s==" "){
            return true;
        }
        string sentence="";
        for(char ch:s){
            if(isalnum(ch)){
                sentence+=tolower(ch);
            }
        }
        cout<<sentence;
        string dup=sentence;
        reverse(dup.begin(),dup.end());
        if(dup==sentence)
        return true;
        else
        return false;
        
    }
};