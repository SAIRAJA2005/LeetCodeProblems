// Last updated: 05/07/2025, 06:54:56
class Solution {
public:
    int findLucky(vector<int>& arr) {
        map<int,int>mp;
        int mx = -1;
        for(int i = 0 ; i < arr.size() ; i++){
            mp[arr[i]]++;
        }
        for(auto i : mp){
            if(i.first == i.second && mx < i.first){
                mx = i.first;
            }
        }
        return mx;

    }
};