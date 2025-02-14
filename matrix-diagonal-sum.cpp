class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int sums=0;
        int row=mat.size();
        int n=row;
        int col=mat[0].size();
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                if(i==j){
                    sums+=mat[i][j];
                }
                if(i==n-j-1){
                    sums+=mat[i][j];
                    if(i==j){
                        sums-=mat[i][j];
                    }
                }
            }
        }
        return sums;
    }
};