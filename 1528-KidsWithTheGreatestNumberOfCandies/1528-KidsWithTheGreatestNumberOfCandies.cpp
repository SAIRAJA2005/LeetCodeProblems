// Last updated: 01/09/2025, 01:01:58
class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool>b;
        int i,p;
        auto it = max_element(candies.begin(),candies.end());
        if (it != candies.end()) {
            p = *it;
        }

        for(i=0;i<candies.size();i++){
            if ((candies[i]+extraCandies) >=p){
                b.push_back(true);
            }
            else{
                b.push_back(false);
            }
        }
        return b;
    }
};