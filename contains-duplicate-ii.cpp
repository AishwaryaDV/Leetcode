class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k){
        unordered_map<int,int> gmap;
        for(int i=0;i<nums.size();i++){
            if(gmap[nums[i]]!=0){
               // printf("hello");
                if(abs(gmap[nums[i]]-i-1)<=k){
                    return true;
                }
            }
            gmap[nums[i]]=i+1;
        }
        return false;
        /*
        for(int i=0;i<nums.size();i++){
            for(int j=1;j<nums.size();j++){
                if(nums[i]==nums[j]){
                    if(abs(i-j)<=k)
                        return true;
                }
            }
        }
        return false;
        */
    }
};