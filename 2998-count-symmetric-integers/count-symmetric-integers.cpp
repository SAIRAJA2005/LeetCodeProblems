class Solution {
public:
    bool SI (int x){
        string y = to_string(x);
        int l = to_string(x).length();
        int p = 0 ,s = 0;
        if(l%2==0 && l>1){
            for(int i = 0 ; i < l ; i++){
                if(i<l/2) p = p+(y[i]-'0');
                else s = s+(y[i]-'0');
            }
            if(p==s) return true;
            else return false;
        }
        else return false;
    }
    int countSymmetricIntegers(int low, int high) {
        int cnt = 0;
        for(int i=low;i<=high;i++){
            if(SI(i)==true) cnt++;
            else continue;
        }
        return cnt;
    }
};