// Last updated: 01/09/2025, 01:03:14
class Solution {
public:
    bool isNStraightHand(vector<int>& hand, int groupSize) {
        if(hand.size() % groupSize != 0) return false;
        map<int,int>s;
        int sum = 0;
        sort(hand.begin(),hand.end());
        for(auto i : hand) s[i]++;
        int first = 0;
        for(int i = 0 ; i < hand.size() ; i++){
            if(s[hand[i]] != 0){
                first = hand[i];
                s[hand[i]]--;
            }
            else continue;
            for(int j = 0 ; j < groupSize - 1 ; j++){
                if(s[first + 1] > 0){
                    s[first + 1]--;
                }
                else if(s[first + 1] == 0) return false;
                first += 1;
            }
            sum += groupSize;
        }
        if(sum == hand.size()) return true;
        return false;
    }
};