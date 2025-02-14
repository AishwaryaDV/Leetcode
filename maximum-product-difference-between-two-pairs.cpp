class Solution {
public:
    int maxProductDifference(vector<int>& nums) {
        int maxi=0;
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int h=nums[n-1]*nums[n-2];
        int l=nums[0]*nums[1];
        maxi=h-l;
        return maxi;
    
        
    }
};