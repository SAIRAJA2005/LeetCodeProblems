// Last updated: 03/08/2025, 23:12:00
class Solution {
    public int maxDepth(String s) {
        int max = 0;
        int c = 0;
        for(int i = 0 ; i < s.length() ; i++){
            if(s.charAt(i) == '(') c++;
            else if(s.charAt(i) == ')') c--;
            if(c > max) max = c;
        }
        return max;
    }
}