// Last updated: 01/09/2025, 01:00:34
class Solution {
public:
    bool isThree(int n) 
    {
        int c=0;
        for (int i=1;i<=n;i++){
            if(n%i==0)  c++;
            if(c>3) return false;
	    }
        if(c==3) return true;
        else return false;        
        return 0;
    }
};