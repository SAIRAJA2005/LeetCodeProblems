// Last updated: 01/09/2025, 00:57:26
class Solution {

    public boolean CheckingPrime(int l){
        if(l <= 1) return false;
        for(int i = 2 ; i < l ; i++){
            if(l % i == 0) return false;
        }
        return true;
    }
    public boolean checkPrimeFrequency(int[] nums) {
        Map<Integer, Integer> mp = new HashMap();
        for(int i = 0 ; i < nums.length ; i++){
            mp.put(nums[i], mp.getOrDefault(nums[i], 0) + 1);
        }
        for(int s : mp.values()){
            if(CheckingPrime(s)) return true;
        }
        return false;
    }
}