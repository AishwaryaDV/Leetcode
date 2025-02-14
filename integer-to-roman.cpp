class Solution {
public:
    string intToRoman(int num) {
        string roman="";
        map<int, string>mp;
        mp[1]="I";
        mp[4]="IV";
        mp[5]="V";
        mp[9]="IX";
        mp[10]="X";
        mp[40]="XL";
        mp[50]="L";
        mp[90]="XC";
        mp[100]="C";
        mp[400]="CD";
        mp[500]="D";
        mp[900]="CM";
        mp[1000]="M";

        for(auto it=mp.rbegin();it!=mp.rend();it++){
            
            int value=it->first;
            while(num >= value){
                if(num>=4){
                    roman+=it->second;            
                }
                if(num>0 && num<4){
                    for(int i=0;i<num;i++){
                        roman+="I";
                    }
                    break;
                }
                num -= it->first;
            }  
        }
        return roman;
        
    }
};