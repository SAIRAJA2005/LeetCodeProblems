class Solution {
public:
    long long kokoEating(long long n , vector<int>&piles){
        long long ans = 0;
        for(auto i : piles){
            ans += ceil(double(i) / double(n));
        }
        return ans;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        long long low = 1;
        long long high = *max_element(piles.begin(),piles.end());
        long long ans = high;
        while(low <= high){
            long long mid = low + (high - low) / 2;
            long long pred = kokoEating(mid,piles);
            if(pred <= h){
                ans = mid;
                high = mid - 1;
            }
            else{
                low = mid + 1;
            }
        }
        return ans;
    }
};