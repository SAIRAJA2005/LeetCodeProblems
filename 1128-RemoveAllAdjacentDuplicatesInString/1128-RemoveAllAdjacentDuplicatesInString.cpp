// Last updated: 01/09/2025, 01:02:40
class Solution {
public:
    string removeDuplicates(string s) {
        stack<char> charStack;
    
        for (char c : s) {
            if (!charStack.empty() && charStack.top() == c) {
                charStack.pop(); // Pop one of the equal adjacent elements
            } else {
                charStack.push(c);
            }
        }

        s = ""; // Clear the string

        // Reconstruct the string from the stack
        while (!charStack.empty()) {
            s = charStack.top()+s;
            charStack.pop();
        }
        return s;
    }
};