class Solution {
public:
    int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue) {
        int count;
        int val;
        vector<string>item;
        if(ruleKey=="type")
            val=0;
        else if(ruleKey=="color")
            val=1;
        else
            val=2;
        for(int i=0;i<items.size();i++){
          if(items[i][val]==ruleValue)
              count++;
            
        }
        return count;
    }
};