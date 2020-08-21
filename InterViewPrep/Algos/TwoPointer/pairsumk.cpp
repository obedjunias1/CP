/*https://practice.geeksforgeeks.org/problems/pair-with-given-sum-in-a-sorted-array/0
15-08-2020 15:22:08
*/
/*
https://leetcode.com/problems/two-sum-ii-input-array-is-sorted/submissions/
class Solution {
public:
    vector<int> twoSum(vector<int>& v, int target) {
        int low = 0,high = v.size()-1;
        vector<int> ans;
        while(low<high){
            int s = v[low]+v[high];
            if(s<target){
                low++;
            }
            else if(s>target){
                high--;
            }
            else{
                ans.push_back(low+1);
                ans.push_back(high+1);
                break;
            }
        }
        return ans;
    }
};
*/
#include<bits/stdc++.h>
using namespace std;
int main()
 {  
    int t,n,val,k;
    
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin>>t;
    while(t--){
        cin>>n;
        vector<int> v;
        for(int i = 0;i<n;i++){
            cin>>val;
            v.push_back(val);
        }
        cin>>k;
        int low = 0;
        int high = n-1;
        bool flag = false;
        int s;
        while(low<high){
            s = v[low] + v[high];
            if(s < k){
                low++;
            }
            else if(s > k){
                high--;
            }
            else{
                cout<<v[low]<<" "<<v[high]<<" "<<s<<endl;
                flag = true;
                low++;
                high--;
            }
        }
        if(!flag){
            cout<<-1<<endl;
        }
        
    }


	//code
	return 0;
}