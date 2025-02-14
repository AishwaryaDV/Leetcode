class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        map<int,int>mp;
        int counter=0;
        for(auto i:nums){
            mp[i]++;
        }
        nums.clear();
        for(auto it=mp.begin();it!=mp.end();it++){
            if(it->second==1){
                nums.push_back(it->first);
                counter++;
            }
            else if(it->second>=2){
                nums.push_back(it->first);
                nums.push_back(it->first);
                counter+=2;
            }
        }
        return counter;
    }
};