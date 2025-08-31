// Last updated: 01/09/2025, 00:59:13
class Solution {
public:
    int maxCount(vector<int>& banned, int n, int maxSum) {
        unordered_set<int>uns(banned.begin() , banned.end());
        long long sm = 0;
        int cnt = 0;
        for(int i = 1 ; i <= n ; i++){
            if(uns.count(i)){
                continue;
            }
            if(sm + i > maxSum) break;
            else sm += i;
            cnt++;
        }
        return cnt;
    }
};