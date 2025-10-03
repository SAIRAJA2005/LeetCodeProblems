class Solution {
public:
    bool isPalindrome(const std::string& s, int left, int right) {
        while (left < right) {
            if (s[left++] != s[right--]) return false;
        }
        return true;
    }
    string longestPalindrome(string s) {
        int start = 0, size = 1;
        for (int i = 1; i < s.length(); ++i) {
            if (i - size >= 1 && isPalindrome(s, i - size - 1, i)) {
                start = i - size - 1;
                size += 2;
            } else if (isPalindrome(s, i - size, i)) {
                start = i - size;
                size += 1;
            }
        }
        return s.substr(start, size);
    }
};