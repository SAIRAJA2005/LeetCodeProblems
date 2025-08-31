// Last updated: 01/09/2025, 01:01:46
class Solution {
public:
    int kthFactor(int n, int k) {
        int count=0;
        for(int i=1;i<=n;i++){
            if(n%i==0){
                count++;
                if(count==k) return i;
            }
        }
        return -1;
    }
};