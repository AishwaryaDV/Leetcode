class Solution {
public:
    bool isPowerOfFour(int n) {
        if(n<=0)
            return false;
        if(n==1)
            return true;
        if(n%2!=0)
            return false;
        
        while(n>1){
            int d=n%4;
            cout<<d<<" ";
            if(d!=0)
                return false;
            n/=4;
        }
        return true;
        
    }
};