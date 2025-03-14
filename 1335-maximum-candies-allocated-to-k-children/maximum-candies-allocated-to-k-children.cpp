class Solution {
public:
    bool canDistribute(vector<int>& candies, long long k, int val) {
        if (val == 0) return false; 
        long long count = 0;
        for (int c : candies) {
            count += c / val;
            if (count >= k) return true;
        }
        return false;
    }

    int maximumCandies(vector<int>& candies, long long k) {
        long long total = accumulate(candies.begin(), candies.end(), 0LL);
        if (total < k) return 0; 
        int left = 1, right = total / k;  
        int result = 0;
        while (left <= right) {
            int mid = left + (right - left) / 2;
            if (canDistribute(candies, k, mid)) {
                result = mid;
                left = mid + 1; 
            } else {
                right = mid - 1; 
            }
        }
        return result;
    }
};
