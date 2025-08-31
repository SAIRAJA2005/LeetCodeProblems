// Last updated: 01/09/2025, 01:01:57
class Solution {
public:
    int maxScore(string s) {
        int rightOnces = 0;
        int n = s.size();
        int maxScore = 0;
        for(auto i : s){
            if(i == '1') rightOnces++;
        }
        int leftZeros = 0;
        for(int i = 0 ; i < n - 1 ; i++){
            if(s[i] == '0') leftZeros++;
            else rightOnces--;

            maxScore = max(maxScore, leftZeros + rightOnces);
        }
        return maxScore;

    }
};