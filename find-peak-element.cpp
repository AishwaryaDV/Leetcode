class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        if(nums.size()==1){
            return 0;
        }
        for(int i=1;i<nums.size()-1;i++){
            int mid=nums[i];
            if(mid>nums[i-1] && mid>nums[i+1]){
                return i;
            }
        }
        int first=nums[0];
        int last=nums[nums.size()-1];
        if(first>nums[1]){
            return 0;
        }
        else if(last>nums[nums.size()-2]){
            return nums.size()-1;
        }
        return -1;
    }
};