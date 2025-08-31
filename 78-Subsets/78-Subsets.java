// Last updated: 01/09/2025, 01:06:06
class Solution {
    public void creating(List<List<Integer>>res,List<Integer>lst, int ind, int size, int[] nums){
        if(ind == size){
            res.add(new ArrayList<>(lst));
            return;
        }

        // pick
        lst.add(nums[ind]);
        creating(res, lst, ind+1, size, nums);
        lst.remove(lst.size() - 1);
        
        // not pick
        creating(res, lst, ind + 1, size, nums);
    }

    public List<List<Integer>> subsets(int[] nums) {
        List<List<Integer>>res = new ArrayList<>();
        List<Integer>lst = new ArrayList<>();
        creating(res,lst, 0, nums.length , nums);
        return res;
    }
}