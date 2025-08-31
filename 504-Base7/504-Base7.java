// Last updated: 01/09/2025, 01:04:00
class Solution {
    public String convertToBase7(int num) {
        return Integer.toString(Integer.parseInt(Integer.toString(num), 10), 7);
    }
}