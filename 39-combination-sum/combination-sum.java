class Solution {
    public void creating(int[] candidates, int target, int sum , int ind, List<List<Integer>>res, List<Integer>lst){
        if(sum == target){
            res.add(new ArrayList<>(lst));
            return;
        }
        // picking the same index
        if(ind < candidates.length && sum + candidates[ind] <= target){
            lst.add(candidates[ind]);
            creating(candidates, target, sum + candidates[ind], ind, res, lst);
            lst.remove(lst.size() - 1);
        }
        // picking the next index
        if(ind < candidates.length){
            creating(candidates, target, sum, ind + 1, res, lst);
        }

    }
    public List<List<Integer>> combinationSum(int[] candidates, int target) {
        List<List<Integer>>res = new ArrayList<>();
        List<Integer>lst = new ArrayList<>();
        creating(candidates, target, 0 , 0 , res, lst);
        return res;
    }
}