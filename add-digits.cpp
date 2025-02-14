class Solution {
public:
    int addDigits(int num) {
        
        while(num>9){
            int r=num%10;
            int q=num/10;
            num=r+q;
        }
        return num;
        
    }
};