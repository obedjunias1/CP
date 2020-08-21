/*https://practice.geeksforgeeks.org/problems/longest-sub-array-with-sum-k/0
20-08-2020 15:01:13
Input : arr[] = { 10, 5, 2, 7, 1, 9 }, 
K = 15
Output : 4
The sub-array is {5, 2, 7, 1}.
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
        
        for(int i=0;i<n;i++){
            cin>>val;
            v.push_back(val);
        }
        int length = 0;
        int summ = 0;
        unordered_map<int,int> mp;
        for(int i=0;i<n;i++){
           summ+=v[i];
           
           if(summ == k){
               length = i+1; 
           }
        
           if(mp.find(summ) == mp.end()){
               mp[summ] = i;
           }
           
           if(mp.find(summ-k) != mp.end()){ 
               int len = i - mp[summ-k];
               length = max(length,len);
           }
           
        }
        cout<<length<<endl;
        
    }

	return 0;
}
