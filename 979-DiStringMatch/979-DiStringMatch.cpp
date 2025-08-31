// Last updated: 01/09/2025, 01:02:56
class Solution {
public:
    vector<int> diStringMatch(string s) {
        int si = 0;
        int sd = s.size();
        vector<int>res;
        for(auto i : s){
            if(i == 'I'){
                res.push_back(si);
                si++;
            }
            else if (i == 'D'){
                res.push_back(sd);
                sd--;
            }
        }
        if(s[s.size()-1] == 'I'){
            res.push_back(si);
        }
        else{
            res.push_back(sd);
        }
        return res;
    }
};