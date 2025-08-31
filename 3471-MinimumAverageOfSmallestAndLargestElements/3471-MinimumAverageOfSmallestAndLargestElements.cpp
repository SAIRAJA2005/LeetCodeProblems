// Last updated: 01/09/2025, 00:57:53
class Solution {
public:
    double minimumAverage(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<double>res;
        int size = nums.size();
        for(int i = 0 ; i < size/2 ; i++){
            double avg = (nums[i] + nums[size - i - 1]) / 2.0;
            res.push_back(avg);

        }
        double minAvg = numeric_limits<double>::max();;
        for(double avg : res) {
            if(avg < minAvg) {
                minAvg = avg;
            }
        }
        return minAvg;
    }
};