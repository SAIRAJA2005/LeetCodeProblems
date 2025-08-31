// Last updated: 01/09/2025, 01:04:07
class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        if(g.size()==0 || s.size()==0) return 0;
        sort(g.begin(),g.end());sort(s.begin(),s.end());
        int i=0,j=0;
        while(i<g.size() && j<s.size())        
        {
            if(s[j] >= g[i])
                i++;
            j++;
        }
        return i;
    }
};