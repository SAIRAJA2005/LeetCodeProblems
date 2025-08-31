// Last updated: 01/09/2025, 01:04:01
class Solution {
public:
    int getNum(int l, vector<int>&num){
        int getIdx = -1;
        for (int i = 0; i < num.size(); i++) {
            if (num[i] == l) {
                getIdx = i;
                break;
            }
        }
        if (getIdx == -1) return -1;
        int cnt = 0;
        for (int i = getIdx+1 ; i < num.size(); i++) {
            if (num[i] > l) return num[i]; 
        }
        return -1; 
    }
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int>res;
        int l = 0;
        for (auto i : nums1) {
            res.push_back(getNum(i, nums2));
        }
        return res;
    }
};