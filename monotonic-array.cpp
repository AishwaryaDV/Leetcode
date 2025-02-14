class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        bool value=true;
        int maxi=*max_element(nums.begin(),nums.end());
        if(nums.size()==1){
            return true;
        }
        if(maxi==nums[0]){
            for(int i=0;i<nums.size()-1;i++){
                if(nums[i]>=nums[i+1]){
                    continue;
                }
                else{
                    return false;
                    break;
                }
            }
        }
        else{
            for(int i=0;i<nums.size()-1;i++){
                if(nums[i]<=nums[i+1]){
                    continue;
                }
                else{
                    return false;
                    break;
                }
            }
        }
        return true;
        
    }
};