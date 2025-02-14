class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(),strs.end());
        string ans="";
        int n=strs.size()-1;
        int first=strs[0].length();
        int last=strs[n].length();
        string f=strs[0];
        string l=strs[n];
        
      for(int i=0;i<first;i++){
          if(f[i]==l[i])
              ans+=f[i];
          else
              break;
      }
        return ans;
    }
};