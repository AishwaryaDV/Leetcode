class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        // map<int,int>mp;
        // for(auto i:nums){
        //     mp[i]++;
        // }
        
        // int counter=0;
        // nums.clear();
        // for(auto it=mp.begin();it!=mp.end();it++){
        //     if(it->second==1){
        //         nums.push_back(it->first);
        //         counter++;
        //     }
        //     else if(it->second>=2){
        //         nums.push_back(it->first);
        //         counter++;
        //     }
        // }
        // return counter;

         auto it=unique(nums.begin(),nums.end());
        return distance(nums.begin(),it);
    }
};