class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        int ans=0;
        int count=nums.size()/2;
        unordered_map<int,int>mp;
        for(auto i:nums){
            mp[i]++;
        }
        for(auto it=mp.begin();it!=mp.end();it++){
            if(it->second==count){
                ans=it->first;
            }
        }
        return ans;
        
    }
};