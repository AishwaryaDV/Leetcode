class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        int n=nums.size();
        int prod=1;
        if(n==3){
            for(int i:nums)
                prod*=i;
            return prod;
        }
        sort(nums.begin(),nums.end());
        int a=nums[n-1];
        int b=nums[n-2];
        int c=nums[n-3];
        int neg1=nums[0];
        int neg2=nums[1];
        prod=max(a*b*c,neg1*neg2*a);
        return prod;
        
    }
};