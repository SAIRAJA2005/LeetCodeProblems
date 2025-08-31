// Last updated: 01/09/2025, 01:00:35
class Solution {
public:
    int getLucky(string s, int k) {
        string l = "";
        for(auto i : s){
            l += to_string(int(i) - 96) ;
        }
        int h ;
        for(int i = 0 ; i < k ; i++){
            h = 0;
            for(int j = 0 ; j < l.size() ; j++){
                h += l[j] - '0';
            }
            l = to_string(h);

        }
        return h;
    }
};