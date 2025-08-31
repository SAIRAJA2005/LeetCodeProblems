// Last updated: 01/09/2025, 00:58:43
class Solution {
public:
    string finalString(string s) {
        string k = "";
        for(auto i : s){
            if (i == 'i'){
                reverse(k.begin(),k.end());
            }
            else k += i;
        }
        return k;
    }
};