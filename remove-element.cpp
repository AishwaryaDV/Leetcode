class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        // int count=0;
        // for(int i=0;i<nums.size();i++){
        //     if(nums[i]!=val){
        //         count++;
        //     }
        //     else{
        //         nums[i]=0;
        //     }
        // }
        // sort(nums.begin(),nums.end(),greater());
        // return count;
        nums.erase(remove(nums.begin(),nums.end(),val),nums.end());
        return nums.size();
    }
};