class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        vector<int>ans;
        vector<int>even;
        vector<int>odd;
        for(int i=0;i<nums.size();i++){
            if(nums[i]%2==0){
                even.push_back(nums[i]);
            }
            if(nums[i]%2!=0){
                odd.push_back(nums[i]);
            }
        }
       int n=even.size();
       for(int i=0;i<n;i++){
         ans.push_back(even[i]);
         ans.push_back(odd[i]);
       }
        return ans;
    }
};