// Last updated: 01/09/2025, 01:06:52
class Solution {
public:
    void generatePara(int close, int open, string s, vector<string>&res, int n){
        if(close == open && (open + close) == 2 * n){
            res.push_back(s);
            return;
        }

        if(open < n){
            generatePara(close,open+1,s+'(',res,n);
        }

        if(close < open){
            generatePara(close+1,open,s+')',res,n);
        }

    }
    vector<string> generateParenthesis(int n) {
        vector<string>res;
        string s;
        generatePara(0,0,s,res,n);
        return res;
    }
};