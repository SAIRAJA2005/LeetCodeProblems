class Solution {
    public void creating(int[] nums, Set<List<Integer>>st, List<Integer>ls, int ind){
        if(ind == nums.length){
            st.add(new ArrayList<>(ls));
            return;
        }
        ls.add(nums[ind]);
        creating(nums, st, ls, ind + 1);
        ls.remove(ls.size() - 1);
        creating(nums, st, ls, ind + 1);
    }
    public List<List<Integer>> subsetsWithDup(int[] nums) {
        Arrays.sort(nums);
        Set<List<Integer>>slist = new HashSet<>();
        List<Integer>lst = new ArrayList<>();
        creating(nums, slist, lst, 0);
        List<List<Integer>>res = new ArrayList<>();
        for (List<Integer> sl : slist) {
            res.add(new ArrayList<>(sl));
        }
        return res;
    }
}