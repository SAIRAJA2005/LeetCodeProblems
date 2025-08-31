// Last updated: 01/09/2025, 00:58:01
class Solution {
public:
    int minimumChairs(string s) {
        int current_people = 0;
        int max_people = 0;

        for (char event : s) {
            if (event == 'E') {
                current_people++;
            } else if (event == 'L') {
                current_people--;
            }

            max_people = max(max_people, current_people);
        }

        return max_people;
    }
};