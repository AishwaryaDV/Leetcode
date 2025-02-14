class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        set<string>sets;
        map<char,string>mp{
            {'a',".-"},
            {'b',"-..."},
            {'c',"-.-."},
            {'d',"-.."},
            {'e',"."},
            {'f',"..-."},
            {'g',"--."},
            {'h',"...."},
            {'i',".."},
            {'j',".---"},
            {'k',"-.-"},
            {'l',".-.."},
            {'m',"--"},
            {'n',"-."},
            {'o',"---"},
            {'p',".--."},
            {'q',"--.-"},
            {'r',".-."},
            {'s',"..."},
            {'t',"-"},
            {'u',"..-"},
            {'v',"...-"},
            {'w',".--"},
            {'x',"-..-"},
            {'y',"-.--"},
            {'z',"--.."} };

            for(int i=0;i<words.size();i++){
                string s=words[i];
                int n=s.length();
                string morse="";
                for(int j=0;j<n;j++){
                    morse+=mp[s[j]];
                }
                sets.insert(morse);
            }
            return sets.size();
        
    }
};