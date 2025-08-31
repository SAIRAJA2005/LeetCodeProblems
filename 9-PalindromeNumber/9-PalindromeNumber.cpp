// Last updated: 01/09/2025, 01:06:57
class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0) return false;
        long long t = x;
        long long wnt = 0;
        while(x > 0){
            int rem = x % 10;
            wnt = (wnt * 10) + rem;
            x /= 10;
        }
       // cout << wnt;
        return wnt == t;
    }
};