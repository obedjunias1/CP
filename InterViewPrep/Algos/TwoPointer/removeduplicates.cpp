/*https://leetcode.com/problems/remove-duplicates-from-sorted-array/solution/
15-08-2020 18:37:24
*/
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.size() == 0 || nums.size() == 1){
            return nums.size();
        }
        
        int i =0;
        int j = 1;
        while(j<nums.size()){
            while(j<nums.size() && nums[i]==nums[j]){
                j++;
            }
            
            if(j<nums.size()){
                i++;
                nums[i] = nums[j];
            }
                
            j++;
        }
        
        return i+1;
    }
};
/*public int removeDuplicates(int[] nums) {
    if (nums.length == 0) return 0;
    int i = 0;
    for (int j = 1; j < nums.length; j++) {
        if (nums[j] != nums[i]) {
            i++;
            nums[i] = nums[j];
        }
    }
    return i + 1;
}*/