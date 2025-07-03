class Solution {
public:
    vector<int> sortEvenOdd(vector<int>& nums) {
        vector<int>e;
        vector<int>o;

        for(int i = 0 ; i < nums.size() ;i++){
            if(i % 2 == 0) e.push_back(nums[i]);
            else o.push_back(nums[i]);
        }

        sort(e.begin() , e.end());
        sort(o.begin() , o.end() , greater<int>());

        int eidx = 0  , oidx = 0;

        for(int i = 0 ; i  < nums.size() ;i++){
            if(i % 2 == 0) nums[i] = e[eidx++];
            else nums[i] = o[oidx++];
        }

        return nums;       
    }
};