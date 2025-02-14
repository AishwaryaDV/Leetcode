class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        unordered_map<string,int>mp;
        vector<string>vec;
        for(auto i:arr){
            mp[i]++;
        }
        for(auto i:arr){
            if(mp[i]==1){
                vec.push_back(i);
            }
        }
        if(vec.size()<k){
            return "";
        }
    
        return vec[k-1];

    }
};