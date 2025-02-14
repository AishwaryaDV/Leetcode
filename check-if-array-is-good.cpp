class Solution {
public:
    bool isGood(vector<int>& nums) {
        int maxi=*max_element(nums.begin(),nums.end());
        if(nums.size()==2 && maxi==1){
            return true;
        }
        if(maxi>nums.size()){
            return false;
        }
        unordered_map<int,int>mp;
        for(auto i:nums){
            mp[i]++;
        }
        if(mp[maxi]!=2){
            return false;
        }
        int count=1;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size()-2;i++){
            if(nums[i]!=count){
                return false;
            }
            if(nums[i]==nums[i+1]){
                return false;
            }
            count++;
        }
        return true;
    }
};