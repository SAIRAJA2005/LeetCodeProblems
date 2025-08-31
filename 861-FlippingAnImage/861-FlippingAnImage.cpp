// Last updated: 01/09/2025, 01:03:17
class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        vector<vector<int>>ans;
        for(int i = 0 ; i < image.size(); i++){
            vector<int>vec;
            for(int j = 0; j < image[i].size() ; j++){
                if(image[i][j] == 1){
                    vec.push_back(0);
                }
                else if(image[i][j] == 0){
                    vec.push_back(1);
                }
            }
            reverse(vec.begin(),vec.end());
            ans.push_back(vec);
        }
        return ans;
    }
};