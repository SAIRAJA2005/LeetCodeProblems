// Last updated: 01/09/2025, 00:59:18
class Solution {
public:
    long long maxKelements(vector<int>& nums, int k) {
        priority_queue<int> maxHeap(nums.begin(), nums.end());
        long long sm = 0;
        while (k--) {
            long long maxElement = maxHeap.top();
            maxHeap.pop();
            sm += maxElement;
            maxHeap.push((maxElement + 2) / 3);
        }

        return sm;
    }
};