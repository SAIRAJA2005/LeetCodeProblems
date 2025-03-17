class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        vector<int>res;
        for(auto i : arr){
            if(res.size() < arr.size()){
                if(i == 0){
                    res.push_back(0);
                    if(res.size() < arr.size()) res.push_back(0);
                    else break;
                }
                else{
                    res.push_back(i);
                }
            }
            else{
                break;
            }
        }
        arr = res;
    }
};