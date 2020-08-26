/*https://practice.geeksforgeeks.org/problems/remove-duplicates/0
26-08-2020 22:02:53
Input:
2
geeksforgeeks
geeks for geeks

Output:
geksfor
geks for
*/
#include<bits/stdc++.h>
using namespace std;
int main()
 {  
    int t,n,val;
    cin>>t;
    cin.ignore();
    while(t--){
        string s;
        getline(cin,s);
        unordered_map<char,int> mp;
        int n = s.length();
        
        for(int i = 0;i<n;i++){
            if(mp.find(s[i]) == mp.end()){
                cout<<s[i];
                mp[s[i]] = 1;
            }
        } 
        cout<<endl;
    }


	//code
	return 0;
}