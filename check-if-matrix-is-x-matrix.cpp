class Solution {
public:
    bool checkXMatrix(vector<vector<int>>& grid) {
        bool ans=true;
        int row=grid.size();
        int n=row;
        int col=grid[0].size();
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
               
                //primary diagonal
                if(i==j || i==n-j-1){
                    if(grid[i][j]==0){
                        ans=false;
                        break;
                    }
                      //secondary diagonal
                if(i==n-j-1){
                    if(grid[i][j]==0){
                        ans=false;
                        break;
                    }
                }
                    
                }
                else{
                    if(grid[i][j]!=0){
                        ans=false;
                        break;
                    }
                }
                
            }
        }
        return ans;
        
    }
};