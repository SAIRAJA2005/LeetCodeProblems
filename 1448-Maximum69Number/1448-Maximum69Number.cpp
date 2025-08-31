// Last updated: 01/09/2025, 01:02:12
class Solution {
public:
    int maximum69Number (int num) {
        string n1=to_string(num);
        for(int i=0;i<n1.size();i++){
            if(n1[i]=='6'){
                n1[i]='9';
                break;
            }
        }
        return stoi(n1);
    }
};