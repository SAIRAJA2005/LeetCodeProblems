// Last updated: 01/09/2025, 01:00:22
class Solution {
    public boolean areNumbersAscending(String s) {
        int l = -1;
        for (int i = 0; i < s.length(); i++) {
            int k = 0;
            boolean p = false;
            while (i < s.length() && Character.isDigit(s.charAt(i))) {
                k = k * 10 + (s.charAt(i) - '0');
                i++;
                p = true;
            }
            if (p) {
                if (l >= k) {
                    return false;
                }
                l = k;
            }
        }
        return true;
    }
}