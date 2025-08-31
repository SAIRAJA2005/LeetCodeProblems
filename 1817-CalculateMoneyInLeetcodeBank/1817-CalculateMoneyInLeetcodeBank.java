// Last updated: 01/09/2025, 01:01:16
class Solution {
    public int calculateTheMoney(int start, int end) {
        int sm = 0;
        while (start <= end) {
            sm += start;
            start++;
        }
        return sm;
    }
    
    public int totalMoney(int n) {
        if (n <= 7) {
            return calculateTheMoney(1, n);
        } else {
            int sm = 0;
            int fullWeeks = n / 7;
            int extraDays = n % 7;
            for (int week = 1; week <= fullWeeks; week++) {
                sm += calculateTheMoney(week, week + 6);
            }
            int startDay = fullWeeks + 1; 
            sm += calculateTheMoney(startDay, startDay + extraDays - 1);
            return sm;
        }
    }
}
