// Last updated: 01/09/2025, 00:57:35
class Solution {
public:
    int maxDifference(string s) {
        unordered_map<char,int>umap;
        for(auto i : s){
            umap[i]++;
        }
        vector<int>vece;
        vector<int>vecb;
        for(auto i : umap){
            if(i.second % 2 == 0){
                vece.push_back(i.second);
            }
            else{
                vecb.push_back(i.second);
            }
        }
        sort(vece.begin(),vece.end());
        sort(vecb.begin(),vecb.end());
        int o = vecb[vecb.size()-1];
        int e = vece[0];
        return o - e;
        
    }
};