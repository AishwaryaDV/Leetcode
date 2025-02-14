class Solution {
public:
    bool isSubsequence(string s, string t) {
        int sindex=0;
        int tindex=0;
        while(sindex<s.size() && tindex<t.size()){
            if(s[sindex]==t[tindex]){
                sindex++;
            }
            tindex++;
        }
        if(sindex==s.size())
        return true;
        else
        return false;
        
    }
};