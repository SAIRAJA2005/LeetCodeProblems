class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        vector<int>res;
        int rem = 1;
        for(int i = digits.size() - 1 ; i >= 0 ; i--){
            int k = digits[i] + rem;
            if(k > 9){
                res.push_back(k % 10);
                rem = k / 10;
            }
            else{
                res.push_back(k);
                rem = 0;
            }
        }
        if(rem > 0){
            res.push_back(rem);
        }
        reverse(res.begin(),res.end());
        return res;
    }
};