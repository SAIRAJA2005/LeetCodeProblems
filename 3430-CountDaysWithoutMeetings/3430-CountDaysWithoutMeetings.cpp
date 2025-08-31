// Last updated: 01/09/2025, 00:57:58
class Solution {
public:
    int countDays(int days, vector<vector<int>>& meetings) {
        if (meetings.empty()) return days;
        int n = meetings.size();
        int cnt = 0;
        sort(meetings.begin(),meetings.end());
        vector<pair<int, int>> mergedMeetings;
        int start = meetings[0][0], end = meetings[0][1];
        for (int i = 1; i < meetings.size(); i++) {
            if (meetings[i][0] <= end + 1) { 
                end = max(end, meetings[i][1]);
            } else {
                mergedMeetings.push_back({start, end});
                start = meetings[i][0];
                end = meetings[i][1];
            }
        }
        mergedMeetings.push_back({start, end});
        int freeDays = 0;
        if (mergedMeetings[0].first > 1) {
            freeDays += (mergedMeetings[0].first - 1);
        }
        for (int i = 1; i < mergedMeetings.size(); i++) {
            freeDays += (mergedMeetings[i].first - mergedMeetings[i - 1].second - 1);
        }
        if (mergedMeetings.back().second < days) {
            freeDays += (days - mergedMeetings.back().second);
        }
        return freeDays;
    }
};