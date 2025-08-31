// Last updated: 01/09/2025, 01:01:32
class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int mx = arr.back();
        vector<int>res;
        int l = 0;
        for(int i = 1 ; i <= mx ; i++){
            if(l < arr.size() && arr[l] == i ){
                l++;
            }
            else {
                res.push_back(i);
            }
        }
        if(k <= res.size()){
            return res[k-1];
        }
        else{
            k = k - res.size();
            int l = arr.back() + k;
            return l;
        }
    }
};