// Last updated: 01/09/2025, 01:01:56
class Solution {
public:
    int maxPower(string s) {
    int maxCnt = 1; 
    int cnt = 1; 
    
    for (int i = 1; i < s.size(); i++) {
        if (s[i] == s[i - 1]) {
            cnt++;
        } else {
            maxCnt = std::max(maxCnt, cnt);
            cnt = 1;
        }
    }
    maxCnt = std::max(maxCnt, cnt); 
    return maxCnt;
    }
};