// Last updated: 01/09/2025, 01:01:50
class Solution {
public:
    int maxProduct(vector<int>& nums) {
        if(nums.size()==2) return (nums[0]-1)*(nums[1]-1);
        else{
            vector<int>vec1;
            int k=*max_element(nums.begin(),nums.end());
            if (count(nums.begin(),nums.end(),k)>1) return ((k-1)*(k-1));
            else if (count(nums.begin(),nums.end(),k)==1){
                for(int i=0;i<nums.size();i++){
                    if(nums[i]!=k) vec1.push_back(nums[i]);
                }
                int k1=*max_element(vec1.begin(),vec1.end());
                return (k-1)*(k1-1);
            }
        }
        return 0;
    }
};