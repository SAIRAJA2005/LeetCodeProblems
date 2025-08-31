// Last updated: 01/09/2025, 01:00:11
class Solution {
public:
    bool Rev(string l){
        string k = l;
        reverse(k.begin(),k.end()) ;
        if(l == k) return true;
        return false;
    }
    string firstPalindrome(vector<string>& words) {
        for(auto i : words){
            if(Rev(i)==true) return i;
        }
        return "";
    }
};