class Solution {
public:
    int scoreOfString(string s) {
        // Initialize diff_1
        int diff_1 = 0;
        
        // Iterate over the string starting from the second character (index 1)
        for (int i = 1; i < s.length(); i++) {
            // Calculate the absolute difference between ASCII values of adjacent characters
            int diff_2= abs(int(s[i]) - int(s[i - 1]));
            
            // Add the calculated difference to the total diff
            diff_1 += diff_2;
        }
        
        // Return the total difference
        return diff_1;
    }
};
