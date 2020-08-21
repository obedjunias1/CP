/*https://leetcode.com/problems/group-anagrams/submissions/
14-08-2020 16:55:26*/
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> m;
        for(string s:strs){
            string c = s;
            sort(c.begin(),c.end());
            // if(m.find(c) == m.end()){
            //     m[c].push_back(s);
            // }
            m[c].push_back(s);
            
        }
        vector<vector<string>> v;
            for(auto p : m){
                v.push_back(p.second);
            }
        return v;
    }
};