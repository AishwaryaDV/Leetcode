class Solution {
public:
    int findMaxK(vector<int>& nums) {
        vector<int>neg;
        vector<int>pos;
        int maxi=-1;
        for(int i:nums){
            if(i<0)
                neg.push_back(i);
            if(i>0)
                pos.push_back(i);
        }
        sort(pos.begin(),pos.end(),greater());
        for(int i=0;i<pos.size();i++){
            auto it=find(neg.begin(),neg.end(),pos[i]*(-1));
            if(it!=neg.end()){
                maxi=pos[i];
                break;
            }
           
        }
            return maxi;
             
        
    }
};