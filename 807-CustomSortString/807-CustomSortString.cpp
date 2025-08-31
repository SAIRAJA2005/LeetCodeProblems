// Last updated: 01/09/2025, 01:03:19
class Solution {
public:
    string customSortString(string order, string s) {
        string NewOne = "";
        int i = 0;
        int j = order.size() ;
        int k = 0;
        while(i < j){
            k = 0;
            while(k != s.size()){
                if(s[k] == order[i]){
                    NewOne += s[k];
                    s.erase(s.begin()+k);
                    //break;
                }
                else k++;
            }
            i++;
        }
        return NewOne+s;
    }
};