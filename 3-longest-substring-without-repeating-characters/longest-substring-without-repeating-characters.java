class Solution {
    public int lengthOfLongestSubstring(String s) {
        int n = s.length();
        if(n == 0 || n == 1) return n;
        int l = 0 , r = 0;
        int mx = 0;
        int[] arr = new int[255];
        Arrays.fill(arr, -1);
        while(r < n){
            if(arr[s.charAt(r)] != -1){
                if(arr[s.charAt(r)] + 1 > l){
                    l = arr[s.charAt(r)] + 1;
                }
            }
            mx = Math.max(mx, r - l + 1);
            arr[s.charAt(r)] = r;
            r++;
        }
        return mx;
    }
}