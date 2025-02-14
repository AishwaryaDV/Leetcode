class Solution {
public:
    vector<int> countBits(int n) {
        vector<int>ans;
        ans.push_back(0);
        int sum;
        for(int i=1;i<=n;i++){
            sum=0;
            int j=i;
            while(j>0){
                int d=j%2;
                if(d==1)
                  sum++;  
                j=j/2;
            }
            ans.push_back(sum);
        }
        return ans;
    }
};