// Last updated: 01/09/2025, 01:01:24
class Solution {
public:
    int minOperations(vector<string>& logs) {
        int cnt = 0;
        for(auto i : logs){
            if(i != "../" && i != "./"){
                cnt++;
            }
            else if(i == "../" && cnt != 0){
                cnt--;
            }
            else{
                continue;
            }
        }
        return cnt;
    }
};