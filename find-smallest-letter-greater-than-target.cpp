class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        char ans=letters[0];
        for(int i=0;i<letters.size();i++){
            if(int(letters[i])>int(target)){
                ans=letters[i];
                break;
            }

        }
        return ans;
        
    }
};