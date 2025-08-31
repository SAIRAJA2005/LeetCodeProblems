// Last updated: 01/09/2025, 01:01:10
class Solution {
public:
    int minimumLength(string s) {
        ios_base::sync_with_stdio(0);
        string k = s;
        int len = s.size();
        int i = 0;
        int j = s.size() - 1;
        reverse(k.begin(),k.end());
        if(k == s && k.size() % 2 == 0) return 0;
        else {
            while(i < j && i < s.size() && j >= 0){
                if(s[i] == s[j]){
                    char p = s[i];
                    while(s[i] == p){
                        len--;
                        if(len == 0) return 0;
                        i++;
                    }
                    while(s[j] == p){
                        len--;
                        if(len == 0) return 0;
                        j--;
                    }
                }
                else return len;
            }
            return len;
        }
    }
};