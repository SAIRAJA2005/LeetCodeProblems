// Last updated: 01/09/2025, 01:03:32
class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        vector<int>k;
        int a=0;
        for(int i=1;i<=nums.size();i++){
            if(count(nums.begin(),nums.end(),i)==0){
                a = i; 
            }
            if(count(nums.begin(),nums.end(),i)==2){
                k.push_back(i);
            }
        }
        k.push_back(a);
        return k;
    }
};