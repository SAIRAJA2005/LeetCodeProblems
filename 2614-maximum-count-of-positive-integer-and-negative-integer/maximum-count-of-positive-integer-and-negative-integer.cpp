class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int cntPos = 0 , cntNeg = 0 ,cntZero = 0;
        for(auto i : nums){
            if (i > 0) cntPos++;
            else if (i == 0) cntZero++;
            else cntNeg++;
        }
        if(cntZero == nums.size()) return 0;
        else if(cntPos == cntNeg) return cntPos+cntZero;
        else return max(cntPos,cntNeg);
    }
};