// Last updated: 01/09/2025, 01:00:21
class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        unordered_map<string,int>unmap;
        for(auto i : arr){
            unmap[i]++;
        }
        int cnt = 0;
        for(auto i : arr){
            if(unmap[i] == 1){
                --k;
                if(k == 0){
                    return i;
                }
            }
        }
        return "";
    }
};