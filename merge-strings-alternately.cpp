class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string ans;
        stack<int>stack1;
        stack<int>stack2;
        int n=word1.size();
        int m=word2.size();
        int maxi= max(n,m);
        for(int i=0;i<n;i++){
            char ch=word1.back();
            stack1.push(ch);
            word1.pop_back();
        }
         for(int i=0;i<m;i++){
            char ch=word2.back();
            stack2.push(ch);
            word2.pop_back();
        }
        for(int i=0;i<m+n;i++){
            if(!stack1.empty()){
                ans+=stack1.top();
                stack1.pop();
            }
            if(!stack2.empty()){
                ans+=stack2.top();
                stack2.pop();
            }
        }
        return ans;
    }
};