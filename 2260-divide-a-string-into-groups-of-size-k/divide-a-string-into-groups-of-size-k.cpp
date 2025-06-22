class Solution {
public:
    vector<string> divideString(string s, int k, char fill) {
        vector<string>str;
        for(int i = 0 ; i < s.size() ; i+=k){
            string q = s.substr(i,k);
            if(q.size() < k){
                q += string(k - q.size() , fill);
            }
            str.push_back(q);
        }
        return str;
    }
};