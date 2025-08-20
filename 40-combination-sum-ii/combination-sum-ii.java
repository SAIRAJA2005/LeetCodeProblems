class Solution {
    public void creating(int[] candidates, int target, int sum, int ind, List<List<Integer>>res, List<Integer>lst){
        if(sum == target){
            res.add(new ArrayList<>(lst));
            return;
        }
        for(int i = ind ; i < candidates.length ; i++){
            if(i > ind && candidates[i] == candidates[i - 1]) continue;
            if(sum + candidates[i] > target) break;
            lst.add(candidates[i]);
            creating(candidates, target, sum + candidates[i], i + 1, res, lst);
            lst.remove(lst.size() - 1);
        }
    }
    public List<List<Integer>> combinationSum2(int[] candidates, int target) {
        Arrays.sort(candidates);
        List<List<Integer>>res = new ArrayList<>();
        List<Integer>lst = new ArrayList<>();
        creating(candidates, target, 0 , 0 , res, lst);
        return res;
    }
}