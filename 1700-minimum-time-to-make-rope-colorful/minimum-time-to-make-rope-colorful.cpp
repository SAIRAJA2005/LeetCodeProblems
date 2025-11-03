class Solution {
public:
    int minCost(string colors, vector<int>& neededTime) {
        int i = 0;
        int j = 1;
        int sm = 0;
        while(j < neededTime.size()){
            if(colors[i] == colors[j]){
                if(neededTime[i] <= neededTime[j]){
                    sm += neededTime[i];
                    i = j;
                    j++;
                }
                else{
                    sm += neededTime[j];
                    j++;
                }
            }
            else{
                i = j;
                j++;
            }
        }
        return sm;
    }
};