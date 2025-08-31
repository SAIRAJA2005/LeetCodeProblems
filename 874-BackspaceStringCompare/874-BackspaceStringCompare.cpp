// Last updated: 01/09/2025, 01:03:15
class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char> st1;
        stack<char> st2;
        for (char ch : s) {
            if (ch == '#') {
                if (!st1.empty()) {
                    st1.pop();
                }
            } else {
                st1.push(ch);
            }
        }
        for (char ch : t) {
            if (ch == '#') {
                if (!st2.empty()) {
                    st2.pop();
                }
            } else {
                st2.push(ch);
            }
        }
        return st1 == st2;
    }
};