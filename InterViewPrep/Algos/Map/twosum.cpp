/*https://leetcode.com/problems/two-sum/solution/
17-08-2020 12:42:13 */

//BruteForce
public int[] twoSum(int[] nums, int target) {
    for (int i = 0; i < nums.length; i++) {
        for (int j = i + 1; j < nums.length; j++) {
            if (nums[j] == target - nums[i]) {
                return new int[] { i, j };
            }
        }
    }
    throw new IllegalArgumentException("No two sum solution");
}

// O(2n) time and O(n) space
public int[] twoSum(int[] nums, int target) {
    Map<Integer, Integer> map = new HashMap<>();
    for (int i = 0; i < nums.length; i++) {
        map.put(nums[i], i);
    }
    for (int i = 0; i < nums.length; i++) {
        int complement = target - nums[i];
        if (map.containsKey(complement) && map.get(complement) != i) {
            return new int[] { i, map.get(complement) };
        }
    }
    throw new IllegalArgumentException("No two sum solution");
}
//O(n) time and O(n) space
public int[] twoSum(int[] nums, int target) {
    Map<Integer, Integer> map = new HashMap<>();
    for (int i = 0; i < nums.length; i++) {
        map.put(nums[i], i);
    }
    for (int i = 0; i < nums.length; i++) {
        int complement = target - nums[i];
        if (map.containsKey(complement) && map.get(complement) != i) {
            return new int[] { i, map.get(complement) };
        }
    }
    throw new IllegalArgumentException("No two sum solution");
}

// O(nlogn+n) == O(nlogn) time and O(1) space
vector<int> twoSum(vector<int> v,int target) {
    sort(v.begin(), v.end());//O(nlogn)
    int low = 0;
    int high = v.size() - 1;
    while(low<high)
    {
        int k = a[low] + a[high];
        if(k<target)
        {
            low++;
        }
        else if(k>target)
        {
            high--;
        }
        else
        {
            v.push_back(low);
            v.push_back(high);
            return v;
        }
    }
    //else not found
}