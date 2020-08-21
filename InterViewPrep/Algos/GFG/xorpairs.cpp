/*https://practice.geeksforgeeks.org/problems/counts-zeros-xor-pairs/0*/
#include<bits/stdc++.h>
using namespace std;

int C(int n){
    return (n*(n-1))/2;
}
int main()
 {  
    int t,n,val;
    
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin>>t;
    while(t--){
        map<int,int> m;
        cin>>n;
        for(int i=0;i<n;i++){
            cin>>val;
            m[val]++;
        }
        int ct = 0;
        for(auto itr = m.begin();itr!=m.end();itr++){
                ct+=C(itr->second);
        }
        cout<<ct<<endl;
    }


	//code
	return 0;
}