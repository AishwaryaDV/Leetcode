class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        vector<int>ans;
        unordered_map<int,int>mp;
        for(int i:nums){
            mp[i]++;
        }
        for(auto it:mp){
            if(it.second==2){
                ans.push_back(it.first);
            }
        }
        for(int i=1;i<=nums.size();i++){
            auto it=mp.find(i);
            if(it==mp.end()){
                ans.push_back(i);
                break;
            }
        }
        return ans;
    }
};