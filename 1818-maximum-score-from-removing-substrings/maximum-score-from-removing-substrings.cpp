class Solution {
public:
    int maximumGain(string s, int x, int y) {
        stack<char>st;
        int sum = 0;
        if(x < y){
            for(auto i : s){
                if(!st.empty() && st.top() == 'b' && i == 'a'){
                    st.pop();
                    sum += y;
                }
                else st.push(i);
            }
            string m ;
            while(!st.empty()){
                m.push_back(st.top());
                st.pop();
            }
            reverse(m.begin(),m.end());
            for(auto i : m){
                if(!st.empty() && st.top() == 'a' && i == 'b'){
                    st.pop();
                    sum += x;
                }
                else st.push(i);
            }
        }
        else{
            for(auto i : s){
                if(!st.empty() && st.top() == 'a' && i == 'b'){
                    st.pop();
                    sum += x;
                }
                else st.push(i);
            }
            string m ;
            while(!st.empty()){
                m.push_back(st.top());
                st.pop();
            }
            reverse(m.begin(),m.end());
            for(auto i : m){
                if(!st.empty() && st.top() == 'b' && i == 'a'){
                    st.pop();
                    sum += y;
                }
                else st.push(i);
            }
        }
        return sum;
    }
};