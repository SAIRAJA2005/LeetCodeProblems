// Last updated: 22/02/2026, 08:45:27
1class Solution {
2public:
3    bool isDigitorialPermutation(int n){
4        int n1 = n;
5        vector<int>num = {1, 2, 145, 40585};
6        string s = to_string(n1);
7        sort(s.begin(),s.end());
8
9        for(int nm : num){
10            string t = to_string(nm);
11            if(t.length() != s.length()) continue;
12            sort(t.begin(),t.end());
13
14            if(s == t) return true;
15        }
16        return false;
17    }
18};