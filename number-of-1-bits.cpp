
#include <inttypes.h>
class Solution {
public:
    int hammingWeight(uint32_t n) {
        int count=0;
        int i=32;
        while(i>0){
            if(n%2==1){
                count++;
            }
            n=n/2;
            i--;
        }
        return count;
    }
};