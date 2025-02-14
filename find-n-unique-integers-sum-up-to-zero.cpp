class Solution {
public:
    vector<int> sumZero(int n) {
        vector<int>ans;
        int i=1;
        if(n%2==1)
            ans.push_back(0);
        while(ans.size()!=n){
            ans.push_back(i);
            ans.push_back(-i);
            i++;
        }
        return ans;
    }
};