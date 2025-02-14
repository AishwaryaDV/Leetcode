class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int r=matrix.size();
      
        for(int i=0;i<r;i++){
            for(auto it=matrix[i].begin();it!=matrix[i].end();++it){
                if(*it == target){
                    return true;
                }
            }
        }
        return false;
        
    }
};