// Last updated: 01/09/2025, 01:01:13
class Solution {
public:
    int countGoodRectangles(vector<vector<int>>& rectangles) {
        vector<int>vec;
        for(int i = 0 ;i < rectangles.size() ; i++){
            int k = min(rectangles[i][0],rectangles[i][1]);
            vec.push_back(k);
        }
        auto maX = *max_element(vec.begin(),vec.end());
        return count(vec.begin(),vec.end(),maX);
    }
};