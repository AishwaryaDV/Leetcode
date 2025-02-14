class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        string s;
        while(n!=0){
            int d=n%2;
            if(d==1)
                s+="1";
            if(d==0)
                s+="0";
            n=n/2;
        }
        while(s.size()!=32){
            s.push_back('0');
        }
        uint32_t ans=0;
        int j=0;
        for(int i=31;i>=0;i--){
            if(s[i]=='1'){
                 ans+=pow(2,j);
            }
            j++;
        }
        return ans;
    }
};