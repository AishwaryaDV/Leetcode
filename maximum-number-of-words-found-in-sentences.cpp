class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int maxi=0;
        for(string i:sentences){
           
            int x=count(i.begin(),i.end(),' ');
            maxi=max(maxi,x+1);
        }
        return maxi;
        
    }
};