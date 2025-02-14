class Solution {
public:
    bool divideArray(vector<int>& nums) {
        unordered_map<int,int>mp;
        for(auto i:nums){
            mp[i]++;
        }
        for(auto it=mp.begin();it!=mp.end();it++){
            if(it->second%2!=0){
                return false;
            }
        }
        return true;
    }
};