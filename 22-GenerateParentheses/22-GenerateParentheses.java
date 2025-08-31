// Last updated: 01/09/2025, 01:06:49
class Solution {
    public void generating(List<String>res,String s, int open, int close, int size){
        if(open == size && close == size){
            res.add(s);
            return;
        }
        if(open < size){
            generating(res, s + '(' , open + 1, close, size);
        }
        if(open > close){
            generating(res, s + ')' , open , close + 1, size);
        }
    }
    public List<String> generateParenthesis(int n) {
        List<String>lst = new ArrayList<>();
        generating(lst, "", 0, 0, n);
        return lst;
    }
}