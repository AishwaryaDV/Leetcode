class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {

        for(int i=m;i<nums1.size();i++){
            if(nums1[i]==0){
                nums1[i]=nums2.back();
                nums2.pop_back();
            }
        }
        sort(nums1.begin(),nums1.end());
        
    }
};