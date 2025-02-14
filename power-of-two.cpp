class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n==1)
            return true;
        
        if(n%2!=0 || n==0 || n<0)
            return false;
            
        if(n%2==0){
            while(n>2){
                int r=n%2;
                //cout<<r;
                    if(r!=0)
                    {
                        return false;
                    }
                n/=2;
            }
                
            }
        return true;
        
    }
};