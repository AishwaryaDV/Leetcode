class Solution {
public:
    int mySqrt(int x) {
       /* if(x==0)
            return 0;
        int i=1;
        while(i<=x/i){
            i++;
        }
        return i-1;*/
        int start=0;
        int end=x;
        long long mid;
        while(start<=end){
            mid=start+(end-start)/2;
            if(mid*mid==x)
                return (int)mid;
            else if(mid*mid<x)
                start=mid+1;
            else
                end=mid-1;
        }
        return (int)start-1;
    }
};