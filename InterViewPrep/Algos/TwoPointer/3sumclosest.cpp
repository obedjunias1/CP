/*https://leetcode.com/problems/3sum-closest/solution/
20-08-2020 18:56:20
Input: nums = [-1,2,1,-4], target = 1
Output: 2
Explanation: The sum that is closest to the target is 2. (-1 + 2 + 1 = 2).
*/
class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int n = nums.size();
        sort(nums.begin(),nums.end());
        
        int prev_sum = 10001;
        for(int i = 0;i<n;){
            int low = i+1;
            int high = n-1;

            while(low<high){
                int s = nums[i]+nums[low]+nums[high];
                if(abs(target-s)<abs(target-prev_sum)){
                    prev_sum = s;
                }
                if(s<=target){
                    low++;
                }
                else if(s>target){
                    high--;
                }
            }
            i++;
        }
        return prev_sum;
    }
};