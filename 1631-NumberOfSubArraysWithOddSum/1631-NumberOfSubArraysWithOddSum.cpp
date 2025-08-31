// Last updated: 01/09/2025, 01:01:35
class Solution {
public:
    int numOfSubarrays(vector<int>& arr) {
        long long mod = 1e9+7;
        long long  evenSum = 0;
        long long oddSum = 0;
        long long sum = 0;
        long long cnt = 0;
        for(int i = 0 ; i < arr.size() ; i++){
            sum += arr[i];
            if(sum % 2 == 0){
                cnt += oddSum % mod;
                evenSum++;
            }
            else{
                cnt += (evenSum % mod + 1) % mod;
                oddSum++;
            }
        }
        return cnt % mod;
    }
};