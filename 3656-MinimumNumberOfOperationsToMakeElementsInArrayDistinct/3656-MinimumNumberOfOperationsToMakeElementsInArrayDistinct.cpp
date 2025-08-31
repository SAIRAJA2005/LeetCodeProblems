// Last updated: 01/09/2025, 00:57:45
class Solution {
public:
    int checkingArray(int start, int end, vector<int>nums){
        //if(end - start < 3) return false;  
        unordered_map<int,int>unmap;
        for(int i = start ; i < end; i++){
            unmap[nums[i]]++;
        }
        for(auto i : unmap){
            if(i.second > 1) return false;
        }
        return true;
        
    }
    int minimumOperations(vector<int>& nums) {
        int n = nums.size();
        //if(n < 3) return 0;
        int cnt = 0;
        for(int i = 0 ; i < n - 1 ; i += 3){
            bool k = checkingArray(i,n,nums);
            if(k == false){
                cnt++;
            }
        }
        return cnt;
    }
};