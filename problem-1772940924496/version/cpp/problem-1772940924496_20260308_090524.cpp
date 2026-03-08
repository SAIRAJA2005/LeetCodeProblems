// Last updated: 08/03/2026, 09:05:24
1class Solution {
2public:
3    int minimumIndex(vector<int>& capacity, int itemSize) {
4        int ind = INT_MAX;
5        int val = INT_MAX;
6        for(int i = 0 ; i < capacity.size() ; i++){
7            if(val > capacity[i] && capacity[i] >= itemSize){
8                ind = i;
9                val = capacity[i];
10            }
11        }
12        if(ind != INT_MAX) return ind;
13        return -1;
14    }
15};