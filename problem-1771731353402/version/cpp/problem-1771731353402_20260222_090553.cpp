// Last updated: 22/02/2026, 09:05:53
1class Solution {
2public:
3    int scoreDifference(vector<int>& nums) {
4        int play1 = 0;
5        int play2 = 0;
6        int active = 0;
7        for(int i = 0 ; i < nums.size() ; i++){
8            if(nums[i] % 2 != 0){
9                active = 1 - active;
10            }
11            if((i + 1) % 6 == 0){
12                active = 1 - active;
13            }
14            if(active == 0) play1 += nums[i];
15            else play2 += nums[i];
16        }
17        return play1 - play2;
18    }
19};