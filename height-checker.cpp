class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int>dup;
        dup=heights;
        sort(dup.begin(),dup.end());
        int count=0;
        for(int i=0;i<heights.size();i++){
            if(heights[i]!=dup[i]){
                count++;
            }
        }
        return count;
        
    }
};