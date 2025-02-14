class Solution {
public:
    int candy(vector<int>& ratings) {
          int n = ratings.size();
    if (n <= 1) return n;

    std::vector<int> candies(n, 1); // Initialize all children with 1 candy

    // Traverse from left to right
    for (int i = 1; i < n; ++i) {
        if (ratings[i] > ratings[i - 1]) {
            candies[i] = candies[i - 1] + 1; // Give more candies if rating is higher
        }
    }

    // Traverse from right to left
    for (int i = n - 2; i >= 0; --i) {
        if (ratings[i] > ratings[i + 1]) {
            candies[i] = std::max(candies[i], candies[i + 1] + 1); // Ensure fairness from both sides
        }
    }

    // Sum up the candies
    int total = 0;
    for (int candy : candies) {
        total += candy;
    }

    return total;
        
    }
};