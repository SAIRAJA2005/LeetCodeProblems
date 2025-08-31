// Last updated: 01/09/2025, 01:06:08
class Solution {
public:
    bool checkingX(vector<int>res, int y){
        int low = 0;
        int high = res.size() - 1;
        while(low <= high){
            int mid = (low + high) / 2;
            if(res[mid] == y) return true;
            else if(res[mid] > y){
                high = mid - 1;
            }
            else{
                low = mid + 1;
            }
        }
        return false;
    }
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int top = 0;
        int bottom = matrix.size() - 1;
        while(top <= bottom){
            if(checkingX(matrix[top],target)) return true;
            top++;
        }
        return false;
    }
};