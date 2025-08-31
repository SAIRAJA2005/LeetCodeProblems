// Last updated: 01/09/2025, 01:00:25
class Solution {
public:
    bool areNumbersAscending(string s) {
        vector<int>vec;
        for(int i = 0 ; i < s.size() ; i++){
            int k = 0;
            bool p = false;
            while(i < s.size() && isdigit(s[i])){
                k = k * 10 + (s[i] - '0');
                i++;
                p = true;
            }
            if(p){
                vec.push_back(k);
            }
        }
        for(int i = 1 ; i < vec.size() ; i++){
            if(vec[i-1] >= vec[i]) return false;
        }
        return true;
    }
};