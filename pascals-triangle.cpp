class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> res;
        vector<int>ans;
        for(int i=0;i< numRows;i++){
            if(i==0){
                ans.push_back(1);
                res.push_back(ans);
            }
            if(i==1){
                ans.push_back(1);
                ans.push_back(1);
                res.push_back(ans);
            }
            if(i>1){
                vector<int> temp=res.back();
                //cout<<temp.size();
                ans.push_back(1);
                for(int j=0;j+1<temp.size();j++){
                    int value=temp[j]+temp[j+1];
                    ans.push_back(value);
                }
                ans.push_back(1);
                res.push_back(ans);
            }
            ans.clear();
        }
        return res;
    }
};