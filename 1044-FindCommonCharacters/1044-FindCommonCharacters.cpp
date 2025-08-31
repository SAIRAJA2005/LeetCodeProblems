// Last updated: 01/09/2025, 01:02:46
class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
        map<char,int>Main;
        for(auto i : words[0]) Main[i]++;
        for(int i = 1 ; i < words.size() ; i++){
            map<char,int>freq;
            for(char ch : words[i]){
                freq[ch]++;
            }
            for(char ch = 'a' ; ch <= 'z' ; ch++){
                Main[ch] = min(Main[ch],freq[ch]);
            }
        }
        vector<string>res;
        for(char l = 'a' ; l <= 'z' ; l++){
            while(Main[l] > 0){
                res.push_back(string(1,l));
                Main[l]--;
            }
        }
        return res;
    }
};