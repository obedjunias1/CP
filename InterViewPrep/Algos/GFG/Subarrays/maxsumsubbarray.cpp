/*12-08-2020 13:20:09
https://practice.geeksforgeeks.org/problems/max-sum-subarray-of-size-k/0*/
/*
int s = 0;
        int ind = 0;
        for(int i=0;i<k;i++){
            s+=v[i];
        }
        maxx = max(maxx,s);
        for(int i=k;i<n;i++){
            s-=v[ind++];
            s+=v[i];
            maxx = max(maxx,s);
        }
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
        int maxx =INT_MIN;
        for(int i=0;i<n-k+1;i++){
            int s = 0;
            for(int j = 0;j<k;j++){
                s+=v[i+j];
            }
            maxx = max(maxx,s);
        }
        cout<<maxx<<endl;
    }


	//code
	return 0;
}