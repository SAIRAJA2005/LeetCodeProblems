// Last updated: 01/09/2025, 01:01:18
class Solution {
public:
    string interpret(string command) {
        string k = "";
        for(int i = 0 ; i < command.size() ; ){
            if(command[i] == 'G'){
                k += command[i];
                i++;
            }
            else if (command[i] == '(' && command[i+1] == ')'){
                k += 'o';
                i += 2;
            }
            else if (command[i] == '(' && command[i+1] == 'a'){
                k += "al";
                i += 3;
            }
            else {
                i++;
            }
        }
        return k;
    }
};