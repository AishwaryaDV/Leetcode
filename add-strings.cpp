class Solution {
public:
    string addStrings(string num1, string num2) {
        int sums,carry=0;
        int i=num1.length()-1;
        int j=num2.length()-1;
        string result;
        while(i>=0 && j>=0){ //handles equal no of digits 
            sums=(num1[i]-'0')+(num2[j]-'0')+carry;
            result+=sums%10 + '0';
            carry=sums/10;
            i--;
            j--; 
        }
        while(i>=0){
            sums=(num1[i] -'0')+carry;
            result+=sums%10 + '0';
            carry=sums/10;
            i--;
        }
         while(j>=0){
            sums=(num2[j] -'0')+carry;
            result+=sums%10 + '0';
            carry=sums/10;
            j--;
        }
        if(carry>0){
            result+=(carry + '0');
        }
        reverse(result.begin(),result.end());
        return result;
        
    }
};