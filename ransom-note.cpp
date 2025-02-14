class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        if(ransomNote.length()==1 && magazine.length()==1){
            if(ransomNote==magazine){
                return true;
            }
            else{
                return false;
            }
        }
        for(int i=0;i<ransomNote.length();i++){
            char target=ransomNote[i];
            size_t pos= magazine.find(target);
            if(pos!=std::string::npos){
                magazine.erase(pos,1);
            }
            else{
                return false;
            }
        }
        return true;
        
    }
};