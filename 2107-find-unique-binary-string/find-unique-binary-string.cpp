class Solution {
public:
    void generate(int &idx,string s, string& ans , vector<string>&nums){
        if(ans != "") return ;
        if(s.size() == nums.size()){
            if(idx < nums.size() && nums[idx] != s){
                ans = s;
            }
            else{
                idx++;
            }
            return;
        }
        s += "0";
        generate(idx , s, ans , nums);
        s.pop_back();
        s += "1";
        generate(idx , s , ans, nums);
    }
    string findDifferentBinaryString(vector<string>& nums) {
        sort(nums.begin(),nums.end());
        string s = "" , ans = "";
        int idx = 0;
        generate(idx,s,ans,nums);
        if(ans == ""){
            ans = nums[nums.size()-1];
            for(int i = nums.size() - 1 ; i >= 0 ; i--){
                if(ans[i] == '0'){
                    ans[i] = '1';
                    break;
                }
            }
        }
        return ans;
    }
};