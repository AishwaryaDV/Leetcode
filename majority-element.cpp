class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size();
        unordered_map<int,int>mp;
        for(auto i: nums){
            mp[i]++;
        }
        int ele=0;
        for(auto it=mp.begin();it!=mp.end();it++){
            if(it->second>n/2){
                ele=it->first;
                break;
            }
        }
        return ele;
    }
};