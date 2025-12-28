// Last updated: 28/12/2025, 08:24:18
1class Solution {
2public:
3    long long maximumScore(vector<int>& nums) {
4         int n = nums.size();
5        
6        vector<int> suffixMin(n);
7        
8        suffixMin[n - 1] = nums[n - 1];
9        
10        for (int i = n - 2; i >= 0; i--) {
11            suffixMin[i] = min(nums[i], suffixMin[i + 1]);
12        }
13        
14        long long prefixSum = 0;
15        
16        long long ans = LLONG_MIN;
17        
18        for (int i = 0; i < n - 1; i++) {
19            prefixSum += nums[i];
20            ans = max(ans, prefixSum - suffixMin[i + 1]);
21        }
22        
23        return ans;
24        
25    }
26};