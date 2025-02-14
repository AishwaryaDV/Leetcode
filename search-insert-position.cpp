class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int index=nums.size();
        sort(nums.begin(),nums.end());
        vector<int>::iterator it;
        it=find(nums.begin(),nums.end(),target);
        if(it!=nums.end()){
            index=it-nums.begin();
        }
        else{
            for(int i=0;i<nums.size();i++){
                if(target<nums[i]){
                    index=i;
                    break;
                }
            }
        }
        return index;

        
    }
};