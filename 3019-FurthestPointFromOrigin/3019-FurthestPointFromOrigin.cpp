// Last updated: 01/09/2025, 00:58:36
class Solution {
public:
    int furthestDistanceFromOrigin(string moves) {
        int l=0,r=0,lr=0;
        for(int i=0;i<moves.size();i++){
            if(moves[i]=='L') l++;
            else if (moves[i]=='R') r++;
            else lr++;
        }
        vector<int>vec;
        vec.push_back(l);
        vec.push_back(r);
        vec.push_back(lr);
        if (vec[0]==vec[1]) return vec[2];
        else if (vec[0]!=vec[1]) return abs(vec[0]-vec[1])+vec[2];
        return 0;
    }
};