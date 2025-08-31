// Last updated: 01/09/2025, 01:02:11
class Solution {
public:
    vector<int> sumZero(int n) {
        vector<int>result;
        
        for(int i = 1 ; i < n/2 +1 ; i++){
            result.push_back(i);
            result.push_back(-i);
        }
        if(n % 2 != 0){
            result.push_back(0);
        }
        return result;
    }

};