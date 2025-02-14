class Solution {
public:
    bool checkValid(vector<vector<int>>& matrix) {
        int row=matrix.size();
        int n=row;
        int col=matrix[0].size();
        unordered_map<int,int>mp;
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                mp[matrix[i][j]]++;
                if(mp[matrix[i][j]]>1 || matrix[i][j]<0 || matrix[i][j]>n){
                    return false;
                }
            }
            mp.clear();
        }
         for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                mp[matrix[j][i]]++;
                if(mp[matrix[j][i]]>1 || matrix[j][i]<0 || matrix[j][i]>n){
                    return false;
                }
            }
            mp.clear();
        }
        return true;
        
    }
};