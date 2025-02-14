class Solution {
public:
   
    vector<vector<int>> largestLocal(vector<vector<int>>& grid) {
        int n=grid.size();
        vector<vector<int>>maxLocal(n-2,vector<int>(n-2));
        for(int i=0;i<n-2;i++){
            for(int j=0;j<n-2;j++){
                maxLocal[i][j]=maxin3(grid,i,j);
            }
        }
        return maxLocal;
    }
     int maxin3(vector<vector<int>>&arr,int i, int j){
        int maxi=INT_MIN;
        for(int x=i;x<i+3;x++){
            for(int y=j;y<j+3;y++){
                maxi=max(arr[x][y],maxi);

            }
        }
        return maxi;
    }
};