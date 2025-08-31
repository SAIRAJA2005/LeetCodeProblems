// Last updated: 01/09/2025, 01:02:36
class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        int n = arr.size();
        for(int i = 0 ; i < arr.size() ; i++){
            if(arr[i] == 0){
                for(int j = n - 1 ; j > i ; j--) arr[j] = arr[j - 1];
                i++;
            }
        }
    }
};