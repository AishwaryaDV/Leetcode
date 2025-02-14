class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        vector<vector<int>>ans;
        vector<int>vec;
        vector<int>::iterator it;

        for(int i=0;i<nums1.size();i++){
            int search=nums1[i];
            it=find(nums2.begin(),nums2.end(),search);
            if(it==nums2.end()){
                vec.push_back(search);
            }
        }
        sort(vec.begin(),vec.end());
        auto it1=unique(vec.begin(),vec.end());
        vec.resize(distance(vec.begin(),it1));
        ans.push_back(vec);
        vec.clear();

        for(int i=0;i<nums2.size();i++){
            int search=nums2[i];
            it=find(nums1.begin(),nums1.end(),search);
            if(it==nums1.end()){
                vec.push_back(search);
            }
        }
        sort(vec.begin(),vec.end());
        auto it2=unique(vec.begin(),vec.end());
        vec.resize(distance(vec.begin(),it2));
        ans.push_back(vec);

        return ans;
        
    }
};