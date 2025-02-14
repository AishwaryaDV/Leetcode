class Solution {
public:
    bool detectCapitalUse(string word) {
        bool ans=true;
        int ascii;
        if((int)word[0]>=97 && (int)word[0]<=122){
            for(int i=1;i<word.length();i++){
                cout<<(int)word[i]<<endl;
                if((int)word[i]>=65 && (int)word[i]<=90){
                    cout<<"I have enetered here";
                    return false;
                }
            }
        }

        else if((int)word[0]>=65 && (int)word[0]<=90){
            if((int)word[1]>=65 && (int)word[1]<=90){
                for(int i=2;i<word.length();i++){
                    if((int)word[i]>=97 && (int)word[i]<=122){
                        return false;
                    }
                }
            }
            else if((int)word[1]>=97 && (int)word[1]<=122){
                for(int i=2;i<word.length();i++){
                    if((int)word[i]>=65 && (int)word[i]<=90){
                       return false;
                    }
                }
            }
        }
        
        return true;
        
    }
};