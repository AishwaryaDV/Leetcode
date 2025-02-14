class Solution {
public:
    bool canBeIncreasing(vector<int>& nums) {
        //vector<int>ans;
        int counter=0;
        for(int i=0;i+1<nums.size();i++){
            if(nums.size()==1){
                return true;
            }
            if(nums[i]>=nums[i+1]){
                counter++;
                //cout<<"Aish has a big butt";
                cout<<nums[i];
                if(i-1>=0 && nums[i-1]>=nums[i]){
                    nums.erase(nums.begin()+i);
                }
                else if(i-1>=0 && nums[i-1]>=nums[i+1]){
                    //erase nums[i+1]
                    nums.erase(nums.begin()+i+1);
                }
                else if(i+2<nums.size() && nums[i]>=nums[i+2]){
                    //erase nums[i]
                    nums.erase(nums.begin()+i);
                }
                else if(i+2<nums.size() && nums[i+1]>=nums[i+2]){
                    //erase nums[i+1]
                    cout<<"yes1";
                    nums.erase(nums.begin()+i+1);
                }
                else{
                    nums.erase(nums.begin()+i+1);
                }
                i=-1;
            }
            if(counter==2){
                return false;
            }
        }
        return true;
        /*
        int j;
        for(int i=0;i<nums.size();i++){
            j=1;
            while(nums[j-1]<nums[j] && j!=nums.size()){
                ans.push_back(nums[j-1]);
                j++;
            }
            int k=1;
            if(ans[k-1]<ans[k] && k!=ans.size()){
                k++;
            }
            else 
                return false;
        }
        return false;*/
    }
};