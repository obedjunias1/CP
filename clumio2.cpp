#include<bits/stdc++.h>
using namespace std;
int solve(vector<int> from,vector<int> to,vector<int> wts){
    int a[101][101] = {0};
    set<int,greater<int>> s;
    for (int i = 0; i < from.size();i++){
        a[from[i]][to[i]] +=1;
    }
    int m = -1;
    for (int i = 0; i < from.size();i++){
        if(a[from[i]][to[i]]>m){
            m = a[from[i]][to[i]];
        }
         
    }
    cout << "max: " << m << endl;
    for (int i = 0; i < from.size();i++){
        if(a[from[i]][to[i]]==m){
            s.insert((from[i] * to[i]));
        }
        
    }

    cout << "ans: " << *(s.begin()) << endl;
}
int main(){
    vector<int> from = {1, 1, 2, 2, 2,1};
    vector<int> to = {2, 2, 3, 3, 4,2};
    vector<int> wts = {2, 3, 1, 3, 4,5};
    int n;
    solve(from, to, wts);
    return 0;
}
