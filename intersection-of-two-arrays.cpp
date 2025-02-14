class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int>ans;
        set<int>s;
        for(int i:nums1){
            s.insert(i);
        }
        
        for(int i:nums2){
            if(s.find(i)!=s.end()){
                ans.push_back(i);
                s.erase(i);
            }
        }
        return ans;
    }
};