class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int>ans;
        vector<int>right;
        vector<int>wrong(2);
        wrong[0]=-1;
        wrong[1]=-1;
        if(nums.empty()){
            return wrong;
        }
        ans.clear();
        for(int i=0;i<nums.size();i++){
            if(target==nums[i]){
                ans.push_back(i);
            }
        }
        if(ans.size()==1){
            int val=ans[0];
            ans.push_back(val);
            return ans;
        }
        
        if(ans.size()>1){
            int mini=*min_element(ans.begin(),ans.end());
            int maxi=*max_element(ans.begin(),ans.end());
            right.push_back(mini);
            right.push_back(maxi);
            return right;
        }
        return wrong;
    }
};