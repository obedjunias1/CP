/*
Given an array of integers and an integer k. Find the total number of continuous subarrays whose sum equals k. Solve this problem using a prefix sum.
Example 1:
Input:nums = [1,1,1], k = 2
Output: 2
14-08-2020 11:22:36
*/
#include<bits/stdc++.h>
using namespace std;

int subarray(vector<int> v,int k) {
    int n = v.size();
    int summ;
    int count = 0;
    for (int i = 0; i < n ;i++){
        for (int j = i; j < n;j++)
        {
            summ = 0;
            for (int k = i; k <= j; k++)
            {
                summ += v[k];
            }
            if(summ == k)
            {
                count++;
            }
        }
    }
    return count;
}