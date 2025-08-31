// Last updated: 01/09/2025, 00:57:27
class Solution {
public:
    int maxBalancedShipments(vector<int>& weight) {
        int cnt = 0;
        int i = 0, j = 1;
        while(j < weight.size()){
            if(weight[i] > weight[j]){
                i = j + 1;
                j = i + 1;
                cnt++;
            }
            else{
                i++;
                j++;
            }
        }
        return cnt;
    }
};