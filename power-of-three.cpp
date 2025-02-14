class Solution {
public:
    bool isPowerOfThree(int n) {
        /*
        if(n==1){
            return true;
        }
        while(n>0 && n%3==0){
            if(n==3){
                return true;
            }
            n/=3;
        }
        return false;
        */
        int x=1;
        int flag;
        if(n==0)
            return false;
        if(n==1 || n==3)
            return true;
        while(n%3==0 && x<n/3){
         if(pow(3,x)==n){
             return true;
         }
         else if(pow(3,x)>n){
             return false;
         }
             
         x++;
        }
        return false;

    }
};