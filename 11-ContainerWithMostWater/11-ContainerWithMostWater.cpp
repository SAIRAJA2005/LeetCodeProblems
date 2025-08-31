// Last updated: 01/09/2025, 01:06:55
class Solution {
public:
    int maxArea(vector<int>& height) {
       int low = 0;
       int high = height.size() - 1;
       int mx = 0;
       int sm = 0;
       while(low <= high){
            sm = (high - low) * (min(height[low],height[high]));
            mx = max(sm,mx);
            if(height[low] < height[high]){
                low++;
            }
            else{
                high--;
            }
       }
       return mx;
    }
};