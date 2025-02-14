class Solution {
public:
    bool isPalindrome(int x) {
      if(x<0)
          return false;
       long rev=0;
        int dup=x;
        while(x>0){
            int d=x%10;
            rev=rev*10+d;
            x/=10;
        }
        if(rev==dup)
            return true;
        else 
            return false;
    }
};