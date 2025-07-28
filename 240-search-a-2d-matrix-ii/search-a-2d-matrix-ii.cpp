class Solution {
public:
    bool binarySearchRow(vector<int>& row, int target) {
        int low = 0, high = row.size() - 1;
        while (low <= high) {
            int mid = (low + high) / 2;
            if (row[mid] == target) return true;
            else if (row[mid] < target) low = mid + 1;
            else high = mid - 1;
        }
        return false;
    }

    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        for (auto& row : matrix) {
            if (binarySearchRow(row, target)) return true;
        }
        return false;
    }
};
