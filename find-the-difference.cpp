class Solution {
public:
    char findTheDifference(string s, string t) {
        unordered_map<char,int>mp;
        char ans;
        for(auto i:s){
            mp[i]++;
        }
        for(auto i:t){
            if(mp[i]==0)
                ans=i;
            mp[i]--;
        }
        return ans;
    }
};