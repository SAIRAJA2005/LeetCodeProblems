// Last updated: 01/09/2025, 01:03:18
class Solution {
public:
    bool rotateString(string s, string goal) {
       return s.size() == goal.size() && (s+s).contains(goal);
    }
};