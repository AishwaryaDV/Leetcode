class Solution {
public:
    bool search(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        bool found=std::binary_search(nums.begin(),nums.end(),target);
        if(found){
            return true;
        }
        return false;
    }
};