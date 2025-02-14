class Solution {
public:
    bool isAnagram(string s, string t) {
        // for(int i=0;i<s.size();i++){
        //     char ch=s[i];
        //     size_t pos=t.find(ch);
        //     if(pos!=string::npos){
        //         t.erase(pos,1);
        //         s.erase(i,1);
        //     }
        // }
        // cout<<t<<endl<<s;
        // if(t=="" && s=="" || t==s)
        // return true;
        // else
        // return false;
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        if(s==t)
        return true;
        else
        return false;
        
    }
};