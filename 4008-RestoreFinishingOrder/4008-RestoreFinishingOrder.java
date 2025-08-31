// Last updated: 01/09/2025, 00:57:22
class Solution {
    public int[] recoverOrder(int[] order, int[] friends) {
        Set<Integer> friendSet = new HashSet<>();
        for (int f : friends) {
            friendSet.add(f);
        }

        List<Integer> result = new ArrayList<>();
        
        for (int id : order) {
            if (friendSet.contains(id)) {
                result.add(id);
            }
        }
        int[] arr = new int[result.size()];
        for (int i = 0; i < result.size(); i++) {
            arr[i] = result.get(i);
        }
        return arr;
    }
}