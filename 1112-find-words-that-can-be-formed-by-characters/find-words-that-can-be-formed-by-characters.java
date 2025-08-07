class Solution {
    public int countCharacters(String[] words, String chars) {
        int[] charCount = new int[26];
        for (char ch : chars.toCharArray()) {
            charCount[ch - 'a']++;
        }
        int cnt = 0;
        for (String word : words) {
            int[] wordCount = new int[26];
            for (char ch : word.toCharArray()) {
                wordCount[ch - 'a']++;
            }
            boolean canForm = true;
            for (int i = 0; i < 26; i++) {
                if (wordCount[i] > charCount[i]) {
                    canForm = false;
                    break;
                }
            }

            if (canForm) {
                cnt += word.length();
            }
        }
        return cnt;
    }
}