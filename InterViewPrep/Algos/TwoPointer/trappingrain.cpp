/*
https://leetcode.com/problems/trapping-rain-water/
18-08-2020 12:09:18
Input: [0,1,0,2,1,0,1,3,2,1,2,1]
Output: 6
*/
#include<bits/stdc++.h>
using namespace std;

int trap(vector<int> nums) {
    int n = nums.size();
    int back = 0;
    int front; 
    int total = 0;
    while(back!=n-1){
        int local = 0;
        front  = back+1;
        while(front < n && nums[front] < nums[back]){
            
            local+=(nums[back]-nums[front]);
            if(front == n-1){
                back++;
            }
            front++;
        }
        if(front !=n){
            total+=local;
            back = front;
        }
    }
    return total;
}
int main() {
    int n, val;
    vector<int> v;
    cout << "n: ";
    cin>>n;
    for (int i = 0;i<n;i++)
    {
        cin >> val;
        v.push_back(val);
    }
    cout << trap(v) << endl;
    return 0;
}
