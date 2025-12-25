class Solution {
public:
    long long maximumHappinessSum(vector<int>& happiness, int k) {
        sort(happiness.begin(), happiness.end());

        if(k == 1) return happiness[happiness.size() - 1];
        long long total = 0;
        int n = happiness.size() - 1;
        for(int i = n ; i >= 0 ; i--){
            k--;
            int cal = happiness[i] - (n - i); 
            if(cal < 0 || k < 0) break;
            total += cal;
        }

        return total;
    }
};