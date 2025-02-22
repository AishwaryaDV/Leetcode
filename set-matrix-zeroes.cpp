class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int row= matrix.size();
        int col=matrix[0].size();
        vector<int>r(row,1); //initialise a vector with the size and the value its going to hold 
        vector<int>c(col,1);
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                if(matrix[i][j]==0){
                    r[i]=0;
                    c[j]=0;
                }
            }
        }
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                if(r[i]==0 || c[j]==0){
                    matrix[i][j]=0;
                }
            }
        }
        
    }
};