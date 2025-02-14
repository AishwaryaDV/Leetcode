class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int>ans;
        int n=nums.size();
        unordered_map<int,int>mp;
        for(auto i:nums){
            mp[i]++; //counts occurance of an element
        }
        for(auto it:mp){
            if(it.second>n/3)
                ans.push_back(it.first);
        }
        return ans;
        
    }
};