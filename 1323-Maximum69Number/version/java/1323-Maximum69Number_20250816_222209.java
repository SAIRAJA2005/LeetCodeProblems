// Last updated: 16/08/2025, 22:22:09
class Solution {
    public int maximum69Number (int num) {
        char[] digits = String.valueOf(num).toCharArray();  
        for (int i = 0; i < digits.length; i++) {
            if (digits[i] == '6') {
                digits[i] = '9';
                break; 
            }
        }
        return Integer.parseInt(new String(digits));
    }
}