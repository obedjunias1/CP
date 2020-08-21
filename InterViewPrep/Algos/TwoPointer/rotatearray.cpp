/*https://leetcode.com/problems/rotate-array/
15-08-2020 20:49:42*/
// class Solution {
// public:
//     void rotate(vector<int>& nums, int k) {
//         vector<int> v;
//         if(k>nums.size()){
//             k = k%nums.size();
//         }
//         int p = nums.size()-k;
//         for(int i=p;i<nums.size();i++){
//             v.push_back(nums[i]);
//         }
//         for(int i = 0;i<p;i++){
//             v.push_back(nums[i]);
//         }
//         for(int i = 0;i<nums.size();i++){
//             nums[i] = v[i];
//         }
//     }
// };
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
         if(k>nums.size()){
            k = k%nums.size();
        }
        int low = 0;
        int high = nums.size()-1;
        while(low<high){
            swap(nums[low],nums[high]);
            low++;
            high--;
        }
        low = 0;
        high = k-1;
         while(low<high){
            swap(nums[low],nums[high]);
            low++;
            high--;
        }
        low = k;
        high = nums.size()-1;
         while(low<high){
            swap(nums[low],nums[high]);
            low++;
            high--;
        }
    }
};
/*class Solution {
  public void rotate(int[] nums, int k) {
    int[] a = new int[nums.length];
    for (int i = 0; i < nums.length; i++) {
      a[(i + k) % nums.length] = nums[i];
    }
    for (int i = 0; i < nums.length; i++) {
      nums[i] = a[i];
    }
  }
}*/