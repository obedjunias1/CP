/*https://practice.geeksforgeeks.org/problems/largest-number-formed-from-an-array/0
22-08-2020 18:56:08*/

#include<bits/stdc++.h>
using namespace std;
int comparator(string s1,string s2){
    return(stoi(s1+s2)>stoi(s2+s1));
}
int main()
 {  
    int t,n,val;
    
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin>>t;
    while(t--){
        cin>>n;
        vector<string> v(n);
        for(int i = 0;i<n;i++){
            cin>>v[i];
        }
        sort(v.begin(),v.end(),comparator);
        for(int i = 0;i<n;i++){
            cout<<v[i];
        }
        cout<<endl;
    }
    


	//code
	return 0;
}