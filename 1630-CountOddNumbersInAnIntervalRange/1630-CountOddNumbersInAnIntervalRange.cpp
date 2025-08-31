// Last updated: 01/09/2025, 01:01:36
class Solution {
public:
    int countOdds(int low, int high) {
        int cnt = 0;
        for(int i = low ; i <= high ; i++){
            if(i % 2 != 0){
                cnt++;
            }
        }
        return cnt;
    }
};