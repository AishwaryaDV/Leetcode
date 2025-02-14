class Solution {
public:
    string reverseWords(string s) {
        string ans;
        stack<string>stk;
        stringstream ss(s);
        string word;
        while(ss>>word){
            stk.push(word);
        }
        while(!stk.empty()){
            ans+=stk.top()+ " ";
            stk.pop();
        }
        ans.erase(ans.length()-1,1);
       cout<<ans;
        return ans;
    }
};