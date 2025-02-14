class Solution {
public:
    string capitalizeTitle(string title) {
       
       if(title.length()==1 || title.length()==2){
           transform(title.begin(),title.end(),title.begin(),::tolower);
           return title;
       }
       transform(title.begin(),title.end(),title.begin(),::tolower);
       string word,ans;
       stringstream ss(title);
       while(ss>>word){
           if(word.length()==2 || word.length()==1){
               ans+=word+' ';
               continue;
           }
           word[0]=toupper(word[0]);
           ans+=word+' ';
       }
       ans.erase(ans.length()-1,' ');
        return ans;
        
    }
};