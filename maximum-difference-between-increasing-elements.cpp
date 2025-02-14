class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int minval=nums[0];
        int ans=-1;
        for(int i=1;i<nums.size();i++){
            if(minval>nums[i] || minval==nums[i])
                minval=nums[i];
            else
                ans=max(ans,nums[i]-minval);
        }
        return ans;
    }
};