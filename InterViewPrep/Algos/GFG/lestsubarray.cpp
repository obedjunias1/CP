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
        int ct = 0;
        int fnct = 0;
        
        for(int i=0;i<n;i++){
            if(v[i]>0){
                ct++;
            }
            else{
                ct = 0;
            }
            fnct = max(fnct,ct);
        }
        cout<<fnct<<endl;
        
    }


	//code
	return 0;
}