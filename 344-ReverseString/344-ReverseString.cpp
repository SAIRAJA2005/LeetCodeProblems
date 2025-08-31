// Last updated: 01/09/2025, 01:04:27
class Solution {
public:
    void reverseString(vector<char>& s) {
        reverse(s.begin(),s.end());
        for (int i = 0; i < s.size(); i++) cout << s[i] << " ";
    }
};