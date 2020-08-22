/*https://practice.geeksforgeeks.org/problems/count-the-triplets/0
21-08-2020 17:19:40*/
#include <bits/stdc++.h>
using namespace std;

int main() {
	//code
	int T,n,num,ct;
	vector<int> a;
	cin>>T;
	while(T--){
	    ct = 0;
	    cin>>n;
	    for (int i=0;i<n;i++){
	        cin>>num;
	        a.push_back(num);
	    }
	    sort(a.begin(),a.end());
	    for(int i = n-1;i>=0;i--){
	        int j = 0;
	        int k = i-1;
	        while(j<k){
	            if(a[i] == a[j]+a[k]){
	                ct++;
	                j++;
	                k--;
	            }
	            else if(a[i]<a[j]+a[k]){
	                k--;
	            }
	            else if(a[i]>a[j]+a[k]){
	                j++;
	            }
	        }
	    }
	    if(ct){
	        cout<<ct<<endl;
	    }
	    else{
	        cout<<-1<<endl;
	    }
	    a.clear();
	}
	return 0;
}