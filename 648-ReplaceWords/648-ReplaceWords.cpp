// Last updated: 01/09/2025, 01:03:31
class Solution {
public:
    string replaceWords(vector<string>& dictionary, string sentence) {
        set<string>s;
        sentence += ' ';
        for(auto i : dictionary){
            s.insert(i);
        }
        string word = "", result = "";
        for(auto i : sentence){
            if(i == ' '){
               if(result.size() > 0) result += ' ';
               string temp = "";
               for(auto j : word){
                   temp += j;
                   if(s.count(temp)== true) break;
               }
               result += temp;
               word = "";
            }
            else{
                word += i;
            }
        }
        return result;
    }
};