// Last updated: 01/09/2025, 01:02:13
class Solution {
public:
    int findNumbers(vector<int>& nums) {
      vector<int>vec1;
        int c=0;
        for(int i=0;i<nums.size();i++){
            vec1.push_back(to_string(nums[i]).size());
            if(vec1[i]%2==0) c++;
        }
        return c; 
    }
};