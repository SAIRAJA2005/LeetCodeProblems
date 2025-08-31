// Last updated: 01/09/2025, 01:01:59
class Solution {
public:
    vector<string> stringMatching(vector<string>& words) {
        vector<string>ans;
        for(int i = 0 ; i < words.size() ; i++){
            for(int j = 0 ; j < words.size() ; j++){
                if(i != j && words[i].size() <= words[j].size()){
                    if (words[j].find(words[i]) != string::npos && find(ans.begin(), ans.end(), words[i]) == ans.end()){                    ans.push_back(words[i]);
                    }
                }
            }
        }
        return ans;
    }
};