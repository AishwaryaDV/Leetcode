class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        if(nums.size()==1 && nums[0]>0){
            return 1;
        }
        if(nums.size()==1 && nums[0]==0){
            return 0;
        }

        int ans=0;
        int itr=1;
        sort(nums.begin(),nums.end());
        int j=0, n=nums.size();
        
            for(int i=0;i<n;i++){
                if(nums[i]>0){
                    itr=nums[i];
                    ans++;
                    for(int k=i;k<n;k++){
                        nums[k]=nums[k]-itr;
                    }
                }
            }
          
        return ans;
        
    }
};