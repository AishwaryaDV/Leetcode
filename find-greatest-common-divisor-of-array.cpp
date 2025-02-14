class Solution {
public:
    int findGCD(vector<int>& nums) {
        int gcd;
        sort(nums.begin(),nums.end());
        for(int i=1;i<=nums[nums.size()-1];++i){
            if(nums[0]%i==0 && nums[nums.size()-1]%i==0){
                gcd=i;
            }
        }
        return gcd;
        
    }
};