// Last updated: 01/09/2025, 01:05:41
class Solution {
public:
    bool checking(int left, int right, const string& s) {
        if (left >= right) return true;
        if (!isalnum(s[left])) return checking(left + 1, right, s);
        if (!isalnum(s[right])) return checking(left, right - 1, s);
        if (tolower(s[left]) != tolower(s[right])) return false;
        return checking(left + 1, right - 1, s);
    }
    bool isPalindrome(string s) {
        return checking(0,s.size(),s);
    }
};