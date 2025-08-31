// Last updated: 01/09/2025, 00:59:50
class Solution {
public:
    string largestGoodInteger(string num) {
        string k="";
        if (num.size()<3) return k;
        for(int i=0;i<num.size()-2;i++){
            if(num[i]==num[i+1] && num[i+1]==num[i+2]){
                string k1=num.substr(i,3);
                if(k1>k) k = k1;
            }
        }
        return k;
    }
};