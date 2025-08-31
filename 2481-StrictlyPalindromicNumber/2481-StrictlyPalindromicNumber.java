// Last updated: 01/09/2025, 00:59:40
public class Solution {
    static boolean Check(int i, int n) {
        String k = Integer.toString(n, i);
        StringBuffer Sb = new StringBuffer(k);
        Sb.reverse();
        return Sb.toString().equals(k);
    }

    public boolean isStrictlyPalindromic(int n) {
        int p = 0;
        for (int i = 2; i <= n - 2; i++) {
            if (Check(i, n)) {
                p++;
            }
        }
        return p == (n - 2) - n;
    }
}
