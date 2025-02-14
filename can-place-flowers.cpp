class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int prev, next;
        if(flowerbed.size()==1 && flowerbed[0]==0){
            return true;
        }
        for(int i=0;i<flowerbed.size();i++){
            if(flowerbed[i]==0){
                if(flowerbed[0]==0 && i==0){
                    prev=0;
                    next=flowerbed[i+1];
                }
                else if(i==flowerbed.size()-1 && flowerbed[flowerbed.size()-1]==0){
                    prev=flowerbed[i-1];
                    next=0;
                }
                else{
                    prev=flowerbed[i-1];
                    next=flowerbed[i+1];
                }
            }
             if(prev==0 && next==0){
                    n--;
                    flowerbed[i]=1;
                }
        }
        for(int i:flowerbed){
            cout<<i;
        }
        if(n<=0)
        return true;
        else
        return false;
        
    }
};