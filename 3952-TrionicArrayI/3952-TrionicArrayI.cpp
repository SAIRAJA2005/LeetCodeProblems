// Last updated: 03/02/2026, 23:41:16
class Solution {
public:
    bool isTrionic(vector<int>& nums) {
        int first = 0;
        bool num1 = false;
        for(int i = 0 ; i < nums.size() - 1; i++){
            if(nums[i] >= nums[i + 1]){
                break;
            }
            else{
                num1 = true;
                first = i;
            }
        }
        cout << first << endl;
        if(num1 == false) return false;

        num1 = false;
        int second = 0;
        for(int i = first + 1 ; i < nums.size() - 1; i++){
            if(nums[i] <= nums[i + 1]){
                break;
            }
            else{
                num1 = true;
                second = i;
            }
        }

        cout << second << endl;
        if(num1 == false) return false;

        num1 = false;
        for(int i = second + 1 ; i < nums.size()-1 ; i++){
            if(nums[i] < nums[i + 1]){
                num1 = true;
                first = i;
            }
            else{
                num1 = false;
                break;
            }
        }
        return num1;
    }
};