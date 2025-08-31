// Last updated: 01/09/2025, 01:00:50
class Solution {
public:
    string removeOccurrences(string s, string part) {
        size_t index = s.find(part);
        while (index != string::npos) {
            s.erase(index, part.length());
            index = s.find(part);
        }
        return s;
    }
};