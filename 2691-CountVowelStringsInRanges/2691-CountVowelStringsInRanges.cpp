// Last updated: 01/09/2025, 00:59:06
class Solution {
public:
    bool func(string s){
        set<char>st = {'a', 'e' , 'i' , 'o' , 'u'};
        int n = s.size();
        int cnt = 0;
        if(st.find(s[0]) != st.end()) cnt++;
        if(st.find(s[n-1]) != st.end()) cnt++;
        return cnt == 2;
    }
    vector<int> vowelStrings(vector<string>& words, vector<vector<int>>& queries) {
        vector<int>vec;
        int cnt = 0;
        for(int i = 0 ; i < words.size() ; i++){
            if(func(words[i])) cnt++;
            vec.push_back(cnt);
        }
        vector<int>res;
        for(auto qr : queries){
            int l = qr[0] , r = qr[1];
            if(l == 0){
                res.push_back(vec[r]);
            }
            else{
                res.push_back(vec[r] - vec[l - 1]);
            }
        }
        return res;
    }
};