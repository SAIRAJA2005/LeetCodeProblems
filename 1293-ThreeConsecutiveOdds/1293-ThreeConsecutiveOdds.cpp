// Last updated: 01/09/2025, 01:02:27
class Solution {
public:
    bool threeConsecutiveOdds(vector<int>& arr) {
        int cnt = 0;
        for(int i = 0 ; i < arr.size() ; i++){
            cnt = 0;
            if(arr[i] % 2 != 0){
                while(i < arr.size() && arr[i] % 2 != 0){
                    cnt++;
                    i++;
                }
                if(cnt >= 3) return true;
            }
        }
        return false;
    }
};