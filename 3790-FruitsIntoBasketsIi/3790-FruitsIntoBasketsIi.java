// Last updated: 01/09/2025, 00:57:29
class Solution {
    public int numOfUnplacedFruits(int[] fruits, int[] baskets) {
        for(int i = 0 ; i < fruits.length ; i++){
            for(int j = 0 ; j < baskets.length ; j++){
                if(fruits[i] <= baskets[j]){
                    fruits[i] = 0;
                    baskets[j] = 0;
                    break;
                }
            }
        }
        int cnt = 0;
        for(int i = 0 ; i < fruits.length ; i++){
            if(fruits[i] != 0){
                cnt += 1;
            }
        }
        return cnt;
    }
}