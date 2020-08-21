/*https://leetcode.com/problems/longest-substring-without-repeating-characters/solution/
17-08-2020 18:41:42*/
/*
public class Solution {
    public int lengthOfLongestSubstring(String s) {
        int n = s.length();
        int ans = 0;
        for (int i = 0; i < n; i++)
            for (int j = i + 1; j <= n; j++)
                if (allUnique(s, i, j)) ans = Math.max(ans, j - i);
        return ans;
    }

    public boolean allUnique(String s, int start, int end) {
        Set<Character> set = new HashSet<>();
        for (int i = start; i < end; i++) {
            Character ch = s.charAt(i);
            if (set.contains(ch)) return false;
            set.add(ch);
        }
        return true;
    }
}*/
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        set<char> st;
        vector<int> v;
        int count= 0;
        int maxx = 0;
        int i=0;
        int j=i;
        while(i<s.length() && j<s.length()){
            if(st.find(s[j]) == st.end()){
                st.insert(s[j++]);
                maxx = max(maxx,j-i);
            }
            else{
                st.erase(st.find(s[i++]));
            }
        }
        return maxx;
    }
};

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.length();
        int maxx = 0;
        map<char,int> mp;
        for(int i = 0,j = 0;j<n;j++){
            if(mp.find(s[j]) != mp.end()){
                i = max(mp[s[j]]+1,i);
            }
            maxx = max(maxx,j-i+1);
            mp[s[j]] = j; 
        }
         return maxx;
    }
   
};
/*#include<bits/stdc++.h>
using namespace std;
int main()
 {  
    int t,n,val;
    
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int maxx = 0;
        set<char> st;
        n = s.length();
        map<char,int> mp;
        for(int i = 0,j = 0;j<n;j++){
            // if(st.find(s[j]) == st.end()){
            //     st.insert(s[j]);
            //     maxx = max(maxx,j-i+1);
            //     j++;
            // }
            // else{
            //     st.erase(st.find(s[i++]));
            // }
            if(mp.find(s[j]) == mp.end()){
                mp[s[j]] = j;
            }
            else{
                i = max(mp[s[j]]+1,i);
            }
            mp[s[j]] = j;
            maxx = max(maxx,j-i+1);
        }
        cout<<maxx<<endl;
    }


	//code
	return 0;
}
*/