class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        string dup="",ans;
       for(int i=0;i<words.size();i++){
           dup=words[i];
           reverse(dup.begin(),dup.end());
           if(dup==words[i]){
               ans=words[i];
               break;
           }
           else{
               dup="";
           }
       }
        return ans;
        
    }
};