// Last updated: 01/09/2025, 01:00:51
class Solution {
public:
    bool checkZeroOnes(string s) {
        int maxO = 0;
        int max1 = 0;
        for(int i = 0 ; i < s.size() ; i++){
            if(s[i] == '1'){
                int cnt = 0;
                while(s[i] != '0' && i < s.size()){
                    cnt++;
                    i++;
                }
                if(max1 < cnt){
                    max1 = cnt;
                }
                i--;
            }
            else{
                int cnt = 0;
                while(s[i] != '1' && i < s.size()){
                    cnt++;
                    i++;
                }
                if(maxO < cnt){
                    maxO = cnt;
                }
                i--;
            }
        }
        return max1>maxO;
    }
};