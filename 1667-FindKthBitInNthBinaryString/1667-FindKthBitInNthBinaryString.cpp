// Last updated: 01/09/2025, 01:01:27
class Solution {
public:
    string invertAndReverse(string s) {
        string res = "";
        for (int i = s.size() - 1; i >= 0; --i) {
            res += (s[i] == '0') ? '1' : '0';
        }
        return res;
    }
    char findKthBit(int n, int k) {
        string str = "0";
        while (str.size() <= k) {
            str += '1';
            str += invertAndReverse(str.substr(0, str.size() - 1));
        }
        return str[k - 1];
    }
};