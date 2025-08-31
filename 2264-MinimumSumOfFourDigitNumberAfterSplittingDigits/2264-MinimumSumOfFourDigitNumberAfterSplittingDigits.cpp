// Last updated: 01/09/2025, 01:00:04
class Solution {
public:
    int minimumSum(int num) {
        vector<int>vec;
        while(num!=0){
            int v = num%10;
            vec.push_back(v);
            num/=10;
        }
        sort(vec.begin(), vec.end());
        return (vec[0]*10)+vec[3]+(vec[1]*10)+vec[2];
    }
};