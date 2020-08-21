/* https://practice.geeksforgeeks.org/problems/minimum-energy/0 */
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
        
        for(int i=0;i<n;i++){
            cin>>val;
            v.push_back(val);
        }
        int s = 0;
        int ct = 0;
        for (int i=0;i<n;i++){
            s = s+v[i];
            if(s<1){
                
                ct +=1 - s;
                s+=ct;
                // cout<<ct<<" ";
            }
            
            // cout<<s<<" ";
        }
        if(ct == 0){
            cout<<1<<endl;
        }
        else
        cout<<ct<<endl;
    }


	//code
	return 0;
}