class Solution {
public:
    int maximumNumberOfStringPairs(vector<string>& words) {
        int count = 0;

        for (int i = 0; i < words.size(); i++) {
            string word = words[i];
            reverse(word.begin(), word.end());

            // Iterate through all words except the target word at index i
            for (int j = 0; j < words.size(); j++) {
                if (i != j && words[j] == word) {
                    cout << word << " ";
                    count++;
                }
            }
        }

        return count / 2;
    }
};
