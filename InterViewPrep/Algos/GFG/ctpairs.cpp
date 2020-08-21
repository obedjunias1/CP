/*https://practice.geeksforgeeks.org/problems/count-pairs-with-given-sum/0 */
#include <bits/stdc++.h>
using namespace std;

int main() {
	//code
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t,n,k,pairs,val;
	vector<int> v;
	cin>>t;
	while(t--){
	    cin>>n>>k;
	    pairs = 0;
	    for (int i=0;i<n;i++){
	        cin>>val;
	        v.push_back(val);
	    }
	    unordered_multiset<int> ums;
	    for(int i= 0;i<n;i++){
	        if(ums.find(k-v[i]) != ums.end())
	            pairs+=ums.count(k-v[i]);
	        ums.insert(v[i]);
	    }
	    cout<<pairs<<"\n";
	    v.clear();
	    
	}
	return 0;
}