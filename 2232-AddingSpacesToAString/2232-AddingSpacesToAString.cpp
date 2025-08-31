// Last updated: 01/09/2025, 01:00:10
class Solution {
public:
    string addSpaces(string s, vector<int>& spaces) { 
        int n = s.size();
        int m = spaces.size();
        string result;
        result.reserve(n + m); 
        int spaceIdx = 0; 
        for (int i = 0; i < n; ++i) {
            if (spaceIdx < m && i == spaces[spaceIdx]) {
                result += ' ';
                spaceIdx++; 
            }
            result += s[i]; 
        }
        return result;
    }
};