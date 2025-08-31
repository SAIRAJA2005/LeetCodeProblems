// Last updated: 01/09/2025, 01:01:43
class Solution {
public:
    int xorOperation(int n, int start) {
        int p=0;
        for(int i=0;i<n;i++){
            p^=start+(2*i);
        }
        return p;
    }
};