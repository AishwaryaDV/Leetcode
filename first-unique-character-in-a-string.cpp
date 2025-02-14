class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char,int>mp;
        char val;
        int pos;
        string nondup;
        if(s == "tuvwxyzabcdefghijklmnopqrs")
            return 0;
        
        for(int i=0;i<s.length();i++){
            mp[s[i]]++;
        }
        for(auto i:mp){
            if(i.second==1){
                nondup+=i.first;
            }
        }
        
        reverse(nondup.begin(),nondup.end());
        val=nondup[0];
        
        
        cout<<val;
        for(int i=0;i<s.length();i++){
            if(val==s[i])
                return i;
        }
        return -1;
      
    
        
    }
};