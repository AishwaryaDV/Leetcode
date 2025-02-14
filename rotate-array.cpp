class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        vector<int>back;
        vector<int>front;

        if(nums.size()<k){
            k=k%nums.size();
        }
         //Reconstruction of the array
        for(int i=0;i<k;i++){
            int num=nums.back();
            back.push_back(num);
            nums.pop_back();
        }
        front=nums;
        reverse(back.begin(),back.end());
        nums.clear();
        for(int i=0;i<back.size();i++){
            nums.push_back(back[i]);
        }
        for(int i=0;i<front.size();i++){
            nums.push_back(front[i]);
        }
        
    }
};