// Last updated: 08/03/2026, 09:25:20
1class Solution {
2public:
3    int smallestBalancedIndex(vector<int>& nums) {
4        int n = nums.size();
5        vector<long long> suf(n + 1, 1);
6        for (int i = n - 1; i >= 0; i--) {
7            if (suf[i + 1] > LLONG_MAX / nums[i])
8                suf[i] = LLONG_MAX;
9            else
10                suf[i] = suf[i + 1] * nums[i];
11        }
12        long long leftSum = 0;
13        for (int i = 0; i < n; i++) {
14            long long rightProduct = suf[i + 1];
15            if (leftSum == rightProduct)
16                return i;
17            leftSum += nums[i];
18        }
19        return -1;
20    }
21};