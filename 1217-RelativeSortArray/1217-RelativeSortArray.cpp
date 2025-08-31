// Last updated: 01/09/2025, 01:02:32
class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        map<int,int>mp;
        for(auto i : arr1){
            mp[i]++;
        }
        vector<int>res;
        sort(arr1.begin(),arr1.end());
        for(auto i : arr2){
            while(mp[i]-- > 0){
                res.push_back(i);
            }
        }
        for(auto i : arr1){
            while(mp[i]-- > 0){
                res.push_back(i);
            }
        }
        return res;
    }
};