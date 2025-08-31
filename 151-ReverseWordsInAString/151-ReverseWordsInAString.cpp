// Last updated: 01/09/2025, 01:05:31
class Solution {
public:
    string reverseWords(string s) {
       stringstream ss(s);
       string p;
       vector<string>ans;
       while(ss >> p){
            ans.push_back(p);
       }
       string k;
       for(int _=ans.size() - 1 ; _ >= 0 ; _--){
            k += ans[_];
            if(_ != 0){
                k += " ";
            }
       }
       return k;
    }
};