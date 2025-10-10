class Solution {
public:
    int maximumEnergy(vector<int>& energy, int k) {
        int mx = INT_MIN;
        for(int i = energy.size() - 1 ; i >= 0 ; i--){
            if(i - k >= 0){
                energy[i - k] += energy[i];
                cout << energy[i] << " " << energy[i - k];
                mx = max(mx, energy[i-k]);
            }
            mx = max(mx, energy[i]);
            
        }
        return mx;
    }
};

// 5 2 -10 -5 1         // k = 3
// 