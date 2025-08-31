// Last updated: 01/09/2025, 01:01:30
class Solution {
public:
    string makeGood(string s) {
        stack<char>res;
        for(auto i : s){
            if(!res.empty() && abs(res.top() - i)== 32){
                res.pop();
            }
            else{
                res.push(i);
            }
        }
        string nw = "";
        while(!res.empty()){
            nw += res.top();
            res.pop();
        }
        reverse(nw.begin(),nw.end());
        return nw;
    }
};