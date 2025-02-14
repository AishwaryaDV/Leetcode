class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        int ans=-1,count=-1;
        map<int,int>mp;
        for(int i:nums){
                mp[i]++;
        }
        for(auto it:mp){
           if(it.first%2==0 && it.second>count){
               count=it.second;
               ans=it.first;
           }
        }
        return ans;
        
        
    }
};