class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        vector<int>arr1;
        vector<int>arr2;
        vector<int>arr3;
        for(auto i : nums){
            if(i == pivot) arr2.push_back(i);
            else if(i < pivot) arr1.push_back(i);
            else arr3.push_back(i);
        }
        for(int i = 0 ; i < arr2.size() ; i++){
            arr1.push_back(arr2[i]);
        }
        for(int i = 0 ; i < arr3.size() ; i++){
            arr1.push_back(arr3[i]);
        }
        return arr1;
    }
};