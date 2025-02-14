class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        int count=0;unordered_set<char>s;
        for(char i:allowed){
            s.insert(i);
        }//inserts characters of allowed into set to keep it unique 
        for(string word:words){
            bool check=true;
            for(char j:word){
                if(s.count(j)==0){
                    check=false;
                    break; }
            }
                if(check)
                    count++;
                    
        }
       return count; 
    }
};