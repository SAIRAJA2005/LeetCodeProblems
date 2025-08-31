// Last updated: 01/09/2025, 01:07:02
class Solution {
    public int[] twoSum(int[] nums, int target) {
        HashMap<Integer, Integer> hmap = new HashMap<>();
        for(int i = 0 ; i < nums.length ; i++){
            if(hmap.containsKey(target - nums[i])){
                return new int[]{hmap.get(target - nums[i]), i};
            }
            hmap.put(nums[i], i);
        }
        return new int[]{};
    }
}

/*
0 -> 3
1 -> 5
2 -> 9
*/