class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int count0=0;
        int i=0;
        while(i<nums.size()){
           if(nums[i]!=0)
               i++;
            else{
                count0++;
                nums.erase(nums.begin()+i);
            }
        }
        
        while(count0--){
            nums.push_back(0);
        }
        
    }
};