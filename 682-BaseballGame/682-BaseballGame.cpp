// Last updated: 01/09/2025, 01:03:28
class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int>st;
        for(auto i : operations){
            if(i == "C"){
                st.pop();
            }
            else if(i == "D"){
                int t = 2 * st.top();
                st.push(t);
            }
            else if(i == "+"){
                int One = st.top();
                st.pop();
                int Two = st.top();
                st.push(One);
                st.push(One+Two);
            }
            else{
                int m = stoi(i);
                st.push(m);
            }
        }
        int sm = 0;
        while(!st.empty()){
            sm += st.top();
            st.pop();
        }
        return sm;
    }
};