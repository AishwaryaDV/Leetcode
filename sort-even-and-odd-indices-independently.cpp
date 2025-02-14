class Solution {
public:
    vector<int> sortEvenOdd(vector<int>& nums) {
        vector<int>ans;
        vector<int>even;
        vector<int>odd;
        for(int i=0;i<nums.size();i++){
            if(i%2==0){
                even.push_back(nums[i]);
            }
             if(i%2!=0){
                odd.push_back(nums[i]);
            }
        }
        int n=nums.size();
        sort(even.begin(),even.end());
        sort(odd.begin(),odd.end(),greater());
        reverse(even.begin(),even.end());
        reverse(odd.begin(),odd.end());
        for(int i=0;i<n;i++){
           if(i%2==0){
               int val=even.back();
               ans.push_back(val);
               even.pop_back();
           }
           else{
               int val=odd.back();
               ans.push_back(val);
               odd.pop_back();
           }
        }
        return ans;
        
    }
};