// Last updated: 01/09/2025, 01:04:28
class Solution {
    public int[] countBits(int n) {
        int result[] = new int[n + 1];
        for(int i = 0 ; i <= n ; i++){
            String str = Integer.toBinaryString(i);
            int cnt = 0;
            for(char s : str.toCharArray()){
                if(s == '1'){
                    cnt++;
                }
            }
            result[i] = cnt;
        }
        return result;
    }
}