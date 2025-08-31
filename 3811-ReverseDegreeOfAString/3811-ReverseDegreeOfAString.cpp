// Last updated: 01/09/2025, 00:57:28
class Solution {
public:
    int reverseDegree(string s) {
        string ful = "zyxwvutsrqponmlkjihgfedcba";
        int pro = 1;
        for(int i = 0 ; i < s.size() ; i++){
            int ind = ful.find(s[i]);
            pro += (ind + 1) * (i + 1);
        }
        return pro - 1;
    }
};