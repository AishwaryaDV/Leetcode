class Solution {
public:
    int findClosestNumber(vector<int>& nums) {
        int ans;
        sort(nums.begin(),nums.end());
        int i=0,j=0;
        int n=nums.size();
        while(j<n){
            if(nums[j]<0){
                i++;
            }
            j++;
        }
        if(i==nums.size())
            return nums[nums.size()-1];

        if(i==0)
             return nums[0];
        
        if(abs(nums[i-1])==nums[i])
            return nums[i];

        abs(nums[i])<abs(nums[i-1])? ans=nums[i]:ans=nums[i-1];
            
         return ans;       
    }
};