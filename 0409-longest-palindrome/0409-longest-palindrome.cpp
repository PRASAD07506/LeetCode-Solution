class Solution {
public:
    int longestPalindrome(std::string s) {
        // Fast fixed-size array since input contains standard ASCII characters
        int charCount[128] = {0};
        
        for (char c : s) {
            charCount[c]++;
        }
        
        int length = 0;
        for (int count : charCount) {
            // Take as many pairs as possible (rounding down to the nearest even number)
            length += (count / 2) * 2;
        }
        
        // If we haven't used all characters, we can place 1 odd character in the center
        if (length < s.size()) {
            length += 1;
        }
        
        return length;
    }
};