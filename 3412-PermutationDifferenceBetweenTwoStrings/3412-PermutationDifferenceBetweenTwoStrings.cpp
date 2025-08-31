// Last updated: 01/09/2025, 00:58:03
class Solution {
public:
    int findPermutationDifference(string s, string t) {
        int sm = 0;
        for(int i = 0 ; i < s.size() ; i++){
            for(int j = 0 ; j < t.size() ; j++){
                if(s[i] == t[j]){
                    sm += abs(i - j);
                } 
            }
        }
        return sm;
    }
};