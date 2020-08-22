/*https://practice.geeksforgeeks.org/problems/leaders-in-an-array/0
21-08-2020 22:23:46*/
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t,n;
	
	int num;
	cin>>t;
	while(t--){
	    cin>>n;
	    int a[n];
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	    }
	    int max_tillnow = a[n-1];
	    vector<int> v;
	    v.push_back(max_tillnow);
	    for(int i = n-2;i>=0;i--){
	        if(a[i]>=max_tillnow){
	            v.push_back(a[i]);
	            max_tillnow = a[i];
	        }
	    }
	    for(int i = v.size()-1;i>=0;i--){
	        cout<<v[i]<<" ";
	    }
	    
	    cout<<endl;
	}
	return 0;
}