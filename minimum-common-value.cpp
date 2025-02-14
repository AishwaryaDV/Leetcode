class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int>s(nums2.begin(),nums2.end());
        vector<int>vec;
        for(int i=0;i<nums1.size();i++){
            int target=nums1[i];
            if(s.count(target)){
                vec.push_back(target);
            }
        }

        if(!vec.empty()){
            int mini=*min_element(vec.begin(),vec.end());
            return mini;
        }
        return -1;
    }
};