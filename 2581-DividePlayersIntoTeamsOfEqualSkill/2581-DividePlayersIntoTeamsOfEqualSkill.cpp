// Last updated: 01/09/2025, 00:59:23
class Solution {
public:
    long long dividePlayers(vector<int>& skill) {
        if(skill.size() == 2) return skill[0]*skill[1];
        sort(skill.begin(),skill.end());
        int i = 1;
        int j = skill.size() - 2;
        int check = skill[0] + skill[j + 1];
        long long sm = skill[0] * skill[j + 1];
        while(i < j){
            if(check != skill[i] + skill[j]){
                return -1;
            }
            sm += skill[i] * skill[j];
            i++;
            j--;
        }
        return sm;
    }
};