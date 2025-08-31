// Last updated: 01/09/2025, 01:03:25
class Solution {
public:
    bool Self(int n){
        int l = n;
        while(n>0){
            int digit = n % 10;
            if(digit==0 || l%digit!=0) return false;
            n/=10;
        }
        return true;
    }
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int>vec;
        for(int i=left;i<=right;i++){
            if(Self(i)==true) vec.push_back(i);
        }
        return vec;
    }
};