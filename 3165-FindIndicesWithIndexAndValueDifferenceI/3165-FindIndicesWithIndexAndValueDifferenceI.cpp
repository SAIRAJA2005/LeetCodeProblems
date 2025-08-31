// Last updated: 01/09/2025, 00:58:30
class Solution {
public:
    vector<int> findIndices(vector<int>& nums, int indexDifference, int valueDifference) {
        vector<int>vec={-1,-1};
        vector<int>vec1;
        for(int i=0;i<nums.size();i++)
        {
            for(int j=0;j<nums.size();j++)
            {
                if((abs(i-j)>=indexDifference) && (abs(nums[i]-nums[j])>=valueDifference))
                {
                    vec1.push_back(i);
                    vec1.push_back(j);
                    return vec1;
                } 
            }
        }
        return vec;
    }
};