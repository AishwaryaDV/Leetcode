class Solution {
public:
    bool isPerfectSquare(int num) {
        if(num==1)
            return true;
        bool ans=false;
        for(long long int i=2;i<=num/2;i++){
            if(i*i==num){
                ans=true;
            }
        }
        return ans;
        
    }
};