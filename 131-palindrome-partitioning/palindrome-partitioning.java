class Solution {
    private boolean checkPali(String str) {
        int l = 0, r = str.length() - 1;
        while (l < r) {
            if (str.charAt(l++) != str.charAt(r--)) return false;
        }
        return true;
    }
    public void creatingPali(String s, int ind, List<List<String>>res, List<String>st){
        if(ind == s.length()){
            res.add(new ArrayList<>(st));
            return;
        }
        for(int i = ind + 1; i <= s.length() ; i++){
            String sub = s.substring(ind , i);
            if(checkPali(sub)){
                st.add(sub);
                creatingPali(s, i , res, st);
                st.remove(st.size() - 1);
            } 
        }
    }
    public List<List<String>> partition(String s) {
        List<List<String>>res = new ArrayList<>();
        List<String>lst = new ArrayList<>();
        creatingPali(s, 0 , res, lst);
        return res;
    }
}