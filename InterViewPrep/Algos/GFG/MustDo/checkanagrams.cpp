/*https://practice.geeksforgeeks.org/problems/anagram/0
25-08-2020 19:05:40
Input:
2
geeksforgeeks forgeeksgeeks
allergy allergic

Output:
YES
NO

Explanation:
Testcase 1: Both the string have same characters with same frequency. So, both are anagrams.
Testcase 2: Characters in both the strings are not same, so they are not anagrams.*/
#include<bits/stdc++.h>
using namespace std;
bool check_anagram(string s1,string s2){
    if(s1.length() != s2.length()){
        return false;
    }
    int n = s1.length();
    int carray[26] = {0};
    for (int i= 0;s1[i]!='\0' || s2[i] != '\0';i++){
        carray[s1[i]-'a']++;
        carray[s2[i]-'a']--;
    }
    for(int i = 0;i<n;i++){
        if(carray[i] != 0){
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
        string s1,s2;
        cin>>s1>>s2;
        if(check_anagram(s1,s2)){
            cout<<"YES";
        }
        else{
            cout<<"NO";
        }
        cout<<endl;
    }   


	//code
	return 0;
}