class Solution {
public:
    bool isHappy(int n) {
        unordered_map<int,int> gmap;
        gmap[n]=n;
        while(true){
            int total=0;
            while(n>0){
                int mod=n%10;
                total+=pow(mod,2);
                n=n/10;
            }
            if(total==1){
                return true;
            }
            else if(gmap.find(total)!=gmap.end()){
                return false;
            }
            gmap[total]=total;
	        n=total;
        }

    }
};