// Last updated: 01/09/2025, 01:01:38
class Solution {
public:
    bool canMakeArithmeticProgression(vector<int>& arr) {
        vector<int>vec;
        sort(arr.begin(),arr.end());
        if(arr.size() == 2) return true;
        else{
            for(int i = 1 ; i < arr.size() ; i++){
            vec.push_back(arr[i] - arr[i-1]);
            }
            for(int i = 0 ; i < vec.size()-1 ; i++){
                if(vec[i] != vec[i+1]) return false;
            }
            return true;
        }
    }
};