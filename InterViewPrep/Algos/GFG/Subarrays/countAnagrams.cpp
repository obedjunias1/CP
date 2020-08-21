/*12-08-2020 15:08:48
https://practice.geeksforgeeks.org/problems/count-occurences-of-anagrams/0
Ref: https://geekstocode.com/sliding-window-technique-easy-problem/
*/
#include<bits/stdc++.h>
using namespace std;
bool countAnagrams(string z,string c){
    int ct = 0;
    int m1[256] = {0};
    int m2[256] = {0};
    for(int i=0;z[i]&&c[i];i++){
        m1[z[i]]++;
        m2[c[i]]++;
    }
    for(int i=0;i<256;i++){
        if(m1[i]!=m2[i]){
            return false;
        }
    }
    return true;
}
int main()
 {  
    int t,n,val;
    
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin>>t;
    while(t--){
        string s,c,z="";
        cin>>s>>c;
        int ct = 0;
        int clen = c.length();
        for(int i=0;i<clen;i++){
            z+=s[i];
        }
        if(countAnagrams(z,c)){
            ct++;
        }
        for(int i=clen;i<s.length();i++){
            z.erase(z.begin());
            z+=s[i];
            if(countAnagrams(z,c)){
                ct++;
            }
        }
        cout<<ct<<endl;
    }


	//code
	return 0;
}