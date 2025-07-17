// Last updated: 18/07/2025, 01:32:01
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