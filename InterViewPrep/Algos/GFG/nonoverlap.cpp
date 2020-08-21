/*https://practice.geeksforgeeks.org/problems/sum-of-lengths-of-non-overlapping-subarrays/0*/
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
        for(int j=0;j<n;j++){
            cin>>val;
            v.push_back(val);
        }
        cin>>k;
        int i =0;
        int c = 0;
        int ct = 0;
        bool flag = false;
        while(i<n){
            if(v[i]<=k){
                c++;
                if(v[i] == k){
                    flag = true;
                    ct+=c;
                    c=0;
                }
            }
            else{
                if(flag && c >0){
                    ct+=c;
                }
                flag = false;
                c = 0;
            }
            i++;
        }
        if(flag && c >0){
                    ct+=c;
                    c=0;
                }
        cout<<ct<<endl;
    }

	return 0;
}