class Solution {
public:
    bool isValid(string s) {
        stack<char>st;
        for(int i=0;i<s.length();i++){
            if(s[i]=='('||s[i]=='['||s[i]=='{')
                st.push(s[i]);
            else{
                if(st.empty())
                    return false;
                else{
                    char ch=st.top();
                    if(ch=='{'){
                        if(s[i]!='}')
                            return false;
                        st.pop();
                    }
                    
                    if(ch=='('){
                        if(s[i]!=')')
                            return false;
                         st.pop();
                    }
                    
                    if(ch=='['){
                        if(s[i]!=']')
                            return false;
                         st.pop();
                    }
                }
            }
        }
        if(st.empty())
            return true;
        else 
            return false;
        
    }
};