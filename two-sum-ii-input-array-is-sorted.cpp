class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int>ans(2);
        unordered_map<int,int>mp;
        for(int i=0;i<numbers.size();i++){
            if(mp.find(target-numbers[i])!=mp.end()){
                ans[0]=mp[target-numbers[i]]+1;
                ans[1]=i+1;
                return ans;
            }
            mp[numbers[i]]=i;
        }
        return ans;
    }
};