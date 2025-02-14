class Solution {
public:
    bool isFascinating(int n) {
        bool fas=false;
        int x=2*n;
        int y=3*n;
        string a=to_string(n);
        string b=to_string(x);
        string c=to_string(y);
        a=a+b+c;
        sort(a.begin(),a.end());
        for(int i=0;i<a.length()-1;i++){
            int ascii=static_cast<int>(a[i]);
            if(ascii==48){
                return false;
            }
            else if(a[i]==a[i+1]){
                return false;
            }
            fas=true;
        }
        return fas;
        
    }
};