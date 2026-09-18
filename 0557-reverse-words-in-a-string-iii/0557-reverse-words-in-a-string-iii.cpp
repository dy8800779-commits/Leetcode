class Solution {
public:
    string reverseWords(string s) {
        int start = 0;
        for (int end = 0; end <= s.length(); ++end) {
            // When reaching a space or the end of the string, reverse the word
            if (end == s.length() || s[end] == ' ') {
                reverse(s.begin() + start, s.begin() + end);
                start = end + 1; // Move start pointer past the space
            }
        }
        return s;
    }
};