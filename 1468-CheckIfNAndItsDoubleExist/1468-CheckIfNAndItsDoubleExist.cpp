// Last updated: 01/09/2025, 01:02:06
class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        for(int i = 0 ; i < arr.size() ; i++){
            for(int j = 0 ; j <  arr.size() ; j++){
                if((2*arr[j]) == arr[i] && i != j) return true;
            }
        }
        return false;
    }
};