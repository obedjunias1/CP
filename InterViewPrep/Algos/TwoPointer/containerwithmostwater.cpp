/*
https://leetcode.com/problems/container-with-most-water/solution/
17-08-2020 11:59:22
*/
/*public class Solution {
    public int maxArea(int[] height) {
        int maxarea = 0;
        for (int i = 0; i < height.length; i++)
            for (int j = i + 1; j < height.length; j++)
                maxarea = Math.max(maxarea, Math.min(height[i], height[j]) * (j - i));
        return maxarea;
    }
}*/
int maxArea(vector<int>& height) {
        int low = 0;
        int high = height.size()-1;
        int maxcont = INT_MIN;
        while(low<high){
            int w = high - low;
            int h = min(height[low],height[high]);
            maxcont = max(maxcont,w*h);
            if(h == height[low]){
                low++;
            }
            else{
                high--;
            }
        }
        return maxcont;
    }