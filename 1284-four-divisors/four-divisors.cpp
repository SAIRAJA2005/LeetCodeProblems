class Solution {
public:
    int  findFour(int num){
        int sm = 0;
        int cnt = 0;
        for(int i = 1 ; i <= sqrt(num) ; i++){
            if(num % i == 0){
                sm += i;
                if(i * i != num){
                    sm += (num / i);
                    cnt++;
                }
                cnt++;
                // cout << i << " " << num / i << endl;
            }
            if(cnt > 4) return 0;
        }
        if(cnt == 4){
           // cout << sm << " ";
            return sm;
        }
        return 0;

    }
    int sumFourDivisors(vector<int>& nums) {
        unordered_map<int,int>freq;
        for(auto i : nums){
            freq[i]++;
        }
        int total = 0;
        for(auto num : freq){
            total += findFour(num.first) * num.second;
        }
        return total;
    }
};