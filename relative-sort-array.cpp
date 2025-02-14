class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        vector<int>buffer;
        vector<int>ans;
        unordered_map<int,int>mp;
        for(auto i:arr1){
            mp[i]++;
        }
        for(int i=0;i<arr2.size();i++){
            int target=arr2[i];
            auto it=mp.find(target);
            if(it!=mp.end()){
                int val=it->second;
                for(int j=0;j<val;j++){
                    ans.push_back(it->first);
                }
            }
        }
        for(const int& item : arr2) {
            arr1.erase(std::remove(arr1.begin(), arr1.end(), item), arr1.end());
        }
        sort(arr1.begin(),arr1.end());
        for(int i:arr1){
            ans.push_back(i);
            
        }
        return ans;
        
    }
};