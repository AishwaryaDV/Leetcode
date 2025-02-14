class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        
        int num=0;
        int count;
        int i=0;
        count=num;
        while(i<nums.size()){
            if(nums[i]==1){
                 num++;
            count=max(count,num);
            }
               else 
                    num=0;
            i++;
        }
        return count;
    }
};