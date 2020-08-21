/*https://practice.geeksforgeeks.org/problems/two-numbers-with-sum-closest-to-zero/0
15-08-2020 16:12:43*/
#include<bits/stdc++.h>
using namespace std;
int main()
 {  
    int t,n,val;
    
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin>>t;
    while(t--){
        cin>>n;
        vector<int> v;
        for(int i =0;i<n;i++){
            cin>>val;
            v.push_back(val);
        }
        sort(v.begin(),v.end());
        int low = 0;
        int high = n-1;
        int prev_sum = INT_MAX;
        while(low<high){
            int s = v[low]+v[high];
            if(abs(s)<abs(prev_sum)){
                prev_sum = s;
            }
            if(s<0){
                low++;
            }
            else {
                high--;
            }
            
        }
        cout<<prev_sum<<endl;
    }

	return 0;
}