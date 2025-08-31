// Last updated: 01/09/2025, 00:59:48
class Solution {
public:
    int percentageLetter(string s, char letter) {
        int k = count(s.begin(),s.end(),letter);
        int p = static_cast<int>((static_cast<double>(k) / s.size()) * 100);        
        return p;
    }
};