class Solution {
public:
    int findFinalValue(vector<int>& nums, int original) {
        // vector<int>::iterator it;
        for(auto i:nums){
             auto it=find(nums.begin(),nums.end(),original);
            if(it!=nums.end()){
                original*=2;
            }
        }
        return original;
        
    }
};