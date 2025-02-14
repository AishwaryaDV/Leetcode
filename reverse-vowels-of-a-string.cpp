class Solution {
public:
    string reverseVowels(string s) {
        string rev;
        for(int i=0;i<s.length();i++){
            if(s[i]=='a'|s[i]=='e'|s[i]=='i'|s[i]=='o'|s[i]=='u'|s[i]=='A'|s[i]=='E'|s[i]=='I'|s[i]=='O'|s[i]=='U'){
                rev+=s[i];
            }
        }
        for(int i=0;i<s.length();i++){
            if(s[i]=='a'|s[i]=='e'|s[i]=='i'|s[i]=='o'|s[i]=='u'|s[i]=='A'|s[i]=='E'|s[i]=='I'|s[i]=='O'|s[i]=='U'){
                s[i]=rev.back();
                rev.pop_back();
            }
        }
        return s;
    }
};