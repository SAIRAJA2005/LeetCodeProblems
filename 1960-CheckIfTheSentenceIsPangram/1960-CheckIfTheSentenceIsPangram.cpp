// Last updated: 01/09/2025, 01:00:54
class Solution {
public:
    bool checkIfPangram(string sentence) {
        set<char>Pan;
        for(auto i : sentence) Pan.insert(i);
        bool correct = (Pan.size()==26) ? true : false;
        return correct;
    }
};