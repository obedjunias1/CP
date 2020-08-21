/*https://leetcode.com/problems/product-of-array-except-self/submissions/
18-08-2020 14:43:41
Input:  [1,2,3,4]
Output: [24,12,8,6]
*/

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> left(n,0);
        left[0] = 1;
        for(int i = 1;i<n;i++){
            left[i] = left[i-1]*nums[i-1];
        }
        
        int right = 1;
        for(int i = n-1;i>=0;i--){
            left[i] *=right;
            right=right*nums[i];
        }

        return left;
    }
};