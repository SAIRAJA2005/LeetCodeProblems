class Solution {
public:
    int maximumEnergy(vector<int>& energy, int k) {
        int mx = INT_MIN;
        for(int i = energy.size() - 1 ; i >= 0 ; i--){
            if(i - k >= 0){
                energy[i - k] += energy[i];
            }
            mx = max(mx, energy[i]);
        }
        return mx;
    }
};
