/*https://leetcode.com/problems/3sum/
19-08-2020 15:17:32
Given array nums = [-1, 0, 1, 2, -1, -4],

A solution set is:
[
  [-1, 0, 1],
  [-1, -1, 2]
]
*/
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        if(nums.size()<2){
            return {};
        }
        sort(nums.begin(),nums.end());
        vector<vector<int>> ans;
        
        for(int i=0;i<nums.size()-1;){
            int j = i+1;
            int k = nums.size()-1;
            while(j<k){
                if(nums[i]+nums[j]+nums[k]<0){
                    
                    j++;
                    while(j<k && nums[j] == nums[j-1]){
                        j++;
                    }
                }
                else if(nums[i]+nums[j]+nums[k]>0){
                    k--;
                    while(j<k && nums[k] == nums[k+1]){
                        k--;
                    }
                }
                else{
                    ans.push_back({nums[i],nums[j],nums[k]});
                    j++;
                    k--;
                    while(j<k && nums[j] == nums[j-1]){
                        j++;
                    }
                    while(j<k && nums[k] == nums[k+1]){
                        k--;
                    }
                }
            }
            i++;
            while(i<k && nums[i] == nums[i-1]){
                i++;
            }
        }
        return ans;
    }
};