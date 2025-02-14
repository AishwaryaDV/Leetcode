class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        int n=nums.size();
        vector<vector<int>>ans;
        vector<int>perm;
        sort(nums.begin(),nums.end());
    
        if(n==1){
         ans.push_back(nums);
        }
        else{
            do{
            for(int i=0;i<n;i++){
                perm.push_back(nums[i]);
            }
            ans.push_back(perm);
            perm.clear();
            
        }while(next_permutation(nums.begin(),nums.end()));
        }
        
        
        return ans;
        
    }
};