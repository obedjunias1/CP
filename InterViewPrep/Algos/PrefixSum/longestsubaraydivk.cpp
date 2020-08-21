/*https://practice.geeksforgeeks.org/problems/longest-subarray-with-sum-divisible-by-k/0/
20-08-2020 15:02:25
Input : A[] = {2, 7, 6, 1, 4, 5}, K = 3
Output : 4
The subarray is {7, 6, 1, 4} with sum 18,
which is divisible by 3.
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
        cin>>n>>k;
        vector<int> v;
        for(int i = 0;i<n;i++){
            cin>>val;
            v.push_back(val);
        }
        unordered_map<int,int> mp;
        int summ = 0;
        int length = 0;
        for(int i = 0;i<n;i++){
            summ+=v[i];
            int rem = (summ%k+k)%k;
            if(rem == 0){
                length = i+1;
            }
            if(mp.find(rem) == mp.end()){
                mp[rem] = i;
            }
           
            if(mp.find(rem) != mp.end()){
                int ind = i - mp[rem];
                length = max(length,ind);
            }
            
        }
        cout<<length<<endl;
    }

	return 0;
}