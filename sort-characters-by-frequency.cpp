class Solution {
public:
    string frequencySort(string s) {
        string ans="";
        map<char,int>mp;
        for(auto i:s){
            mp[i]++;
        }
        vector<pair<int,char>>v;
        for(auto it:mp){
            v.push_back({it.second,it.first});
        }
        sort(v.begin(),v.end(),greater());
        for(auto i:v){
            int cnt=i.first;
            while(cnt--){
                ans.push_back(i.second);
            }
        }
        
       
        return ans;
        
    }
};