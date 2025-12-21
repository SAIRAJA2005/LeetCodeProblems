class Solution {
public:
    long long minCost(string s, vector<int>& cost) {
        vector<long long>freq(255, 0);
        long long mx = 0;
        long long total = 0;
        for(int i = 0 ; i < cost.size() ; i++){
            freq[s[i]] += cost[i];
            if(freq[s[i]] > mx){
                mx = freq[s[i]];
            }
            total += cost[i];
        }
       // cout << total << " " << mx;
        return total - mx;

    }
};