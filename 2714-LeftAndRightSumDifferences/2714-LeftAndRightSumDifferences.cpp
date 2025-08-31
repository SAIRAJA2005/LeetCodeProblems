// Last updated: 01/09/2025, 00:59:03
class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        vector<int>vec1={0};
        vector<int>vec2={0};
        int sum=0;
        for(int i=0;i<nums.size()-1;i++){
            sum+=nums[i];
            vec1.push_back(sum);
        }
        reverse(nums.begin(),nums.end());
        sum=0;
        for(int i=0;i<nums.size()-1;i++){
            sum+=nums[i];
            vec2.push_back(sum);
        }
        reverse(vec2.begin(),vec2.end());
        vector<int>vec3;
        for(int i=0;i<vec2.size();i++){
            vec3.push_back(abs(vec1[i]-vec2[i]));
        }
        return vec3;
    }
};