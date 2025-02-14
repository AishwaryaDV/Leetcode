class Solution {
public:
    double utility(double x, long n) {
        double power=1.0;
        if(n==1)
            return x;
        if(n==0)
            return 1.0;
        if(n<0){
            return utility(1/x,-n);
        }
       
            power=utility(x*x,n/2);
            if(n%2)
                power*=x;
            return power;
        
        
    }
    double myPow(double x, int n){
        return utility(x,n);
    }
};