// Last updated: 01/09/2025, 00:58:12
class Solution {
public:
    int minimumBoxes(vector<int>& apple, vector<int>& capacity) {
        int sm = 0;
        for(auto i : apple){
            sm += i;
        }
        sort(capacity.begin(),capacity.end());
        int cnt = 0, sm2 = 0;
        for(int i = capacity.size()-1 ; i > -1 ; i--){
            sm2 += capacity[i];
            cnt++;
            if(sm2 >= sm) return cnt;
        }
        return cnt;
        
    }
};