// Last updated: 01/09/2025, 00:58:58
class Solution {
public:
    vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) {
        vector<int>result;
        int ind = 0;
        int maxone = 0;
        for(int i = 0 ; i < mat.size() ; i++){
            int k = count(mat[i].begin(),mat[i].end(),1);
            if(k > maxone){
                maxone = k;
                ind = i;
            }
            else if(k == maxone && ind > i){
                maxone = k;
                ind = i;                
            }
        }
        result.push_back(ind);
        result.push_back(maxone);
        return result;
    }
};