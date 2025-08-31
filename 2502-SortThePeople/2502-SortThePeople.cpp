// Last updated: 01/09/2025, 00:59:36
class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        map<int,string>myMap;
        vector<string>vec;
        for(int i = 0 ; i < names.size() ; i++) myMap[heights[i]] = names[i];
        for(auto i : myMap) vec.push_back(i.second);
        reverse(vec.begin(),vec.end());
        return vec;
    }
};