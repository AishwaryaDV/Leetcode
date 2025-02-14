class Solution {
public:
    int smallestRangeI(vector<int>& nums, int k) {
        int maxi=*max_element(nums.begin(),nums.end());
        int mini=*min_element(nums.begin(),nums.end());
        int dif=maxi-mini;
        if(dif-k<=k){
            return 0;
        }
        return dif-k-k;

    }
};