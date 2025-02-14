class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>mp;
        vector<int>ans;
        for(int i=0;i<nums.size();i++){
            int key=target-nums[i];
            auto it=mp.find(key);
            if(it==mp.end()){
                mp[nums[i]]=i;
            }
            else if(it!=mp.end()){
                ans.push_back(it->second);
                ans.push_back(i);
            }
        }
        return ans;
        
    }
};