// Last updated: 01/09/2025, 01:01:48
class Solution {
public:
    double average(vector<int>& salary) {
        double sr = 0;
        sort(salary.begin(),salary.end());
        for(int i = 1 ; i < salary.size() -1 ; i++){
            sr += salary[i];
        }
        int size = salary.size() - 2;
        return sr / size ;
    }
};