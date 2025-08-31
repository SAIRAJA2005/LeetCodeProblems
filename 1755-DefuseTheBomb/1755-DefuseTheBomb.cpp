// Last updated: 01/09/2025, 01:01:22
class Solution {
public:
    vector<int> decrypt(vector<int>& A, int k) {
        int n=A.size(),S=0,t;
         vector<int>v(n, 0);

        if(k==0) return v;
        
        else if(k<0)
        {
            k=-k; 
            for(int i=n-k;i<n;i++)S+=A[i];
            for(int i=0;i<n;i++)
                v[i]=S,
                S=S-A[(i-k+n)%n]+A[i];
        
            return v;
        }

        else
        {        
            for(int i=0;i<k;i++) S+=A[i];
            for(int i=n-1;i>=0;i--)
                v[i]=S,
                S=S-A[(i+k+n)%n]+A[i];
            
            return v;
        }
    }
};