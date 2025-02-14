class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int,int>mp;
        unordered_map<int,int> :: iterator itr;
        bool ans=false;
        for(auto i:nums){
            mp[i]++;
        }
        for(itr=mp.begin();itr!=mp.end();++itr){
           if(itr->second >= 2){
                ans=true;
                break;
            }
        }
        return ans;
    }
};