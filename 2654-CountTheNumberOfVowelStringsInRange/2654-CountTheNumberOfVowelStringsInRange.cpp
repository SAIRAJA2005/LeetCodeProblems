// Last updated: 01/09/2025, 00:59:08
class Solution {
public:
    int vowelStrings(vector<string>& words, int left, int right) {
        int cnt = 0;
        vector<char>vec{'a','e','i','o','u'};
        for(int i = left ; i <= right ; i++){
            string k = words[i];
            int p = k.size() - 1;
            if(count(vec.begin(),vec.end(),k[0]) == 1 && count(vec.begin(),vec.end(),k[p]) == 1) cnt++;
        }
        return cnt;
    }
};