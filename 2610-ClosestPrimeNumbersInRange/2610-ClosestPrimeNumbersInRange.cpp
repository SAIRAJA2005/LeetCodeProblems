// Last updated: 01/09/2025, 00:59:20
class Solution {
public:
    void findPrime(vector<bool>&prime){
        int n = prime.size();
        prime[0] = prime[1] = false;
        for(int i = 2 ; i * i < n ; i++){
            if(prime[i] == true){
                for(int j = i * i ; j <= n   ; j+=i){
                    prime[j] = false;
                }
            }
        }
    }
    vector<int> closestPrimes(int left, int right) {
        vector<bool>primes(right+1,true);
        findPrime(primes);
        vector<int>res{-1,-1};
        int mn = INT_MAX;
        int prev = -1;
        for(int i = left ; i <= right ; i++){
            if(primes[i]){
                if(prev != -1 && i - prev < mn){
                    mn = i - prev;
                    res = {prev,i};
                }
                prev = i;
            }
        }
        return res;
    }
};