class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int>ans;
       
        int n=nums.size();
        map<int,int>mp;
        for(auto i:nums){ // counts occurance of each number 
            mp[i]++;
        }
        for(int i=1;i<=n;i++){
            if(mp.find(i)==mp.end())
                ans.push_back(i);
        }
        
       /* for(auto it=mp.begin();it!=mp.end();++it){
            cout<< it->first <<" "<<it->second<<"\n";
        }*/
        return ans;
    }
};