class Solution {
public:
    int returnToBoundaryCount(vector<int>& nums) {
        int boundaryCount=0;
        int position=0;
        for(int i=0;i<nums.size();i++){
            position+=nums[i];
            if(position==0){
                boundaryCount++;
            }
        }
        return boundaryCount;
        
    }
};