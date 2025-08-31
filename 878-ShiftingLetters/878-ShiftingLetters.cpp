// Last updated: 01/09/2025, 01:03:13
class Solution {
public:
    string shiftingLetters(string s, vector<int>& shifts) {
        int n = s.size();
        for (int i = n - 2; i >= 0; --i) {
            shifts[i] += shifts[i + 1];
            shifts[i] %= 26;  
        }
        for (int i = 0; i < n; ++i) {
            int shift = shifts[i] % 26; 
            s[i] = (s[i] - 'a' + shift) % 26 + 'a';
        }
        return s;
    }
};
