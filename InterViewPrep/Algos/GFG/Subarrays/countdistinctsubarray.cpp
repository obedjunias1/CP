/*https://practice.geeksforgeeks.org/problems/count-distinct-elements-in-every-window/1*/
//Reff: https://geekstocode.com/sliding-window-technique-easy-problem/
#include <bits/stdc++.h>
using namespace std;
//12-08-2020 13:20:01
vector<int> countDistinct(int[], int, int){
    vector<int> v;
    unordered_map<int,int> m;
    int dist = 0;
    for(int i=0;i<k;i++){
        if(m[A[i]] == 0){
            dist++;
        }
        m[A[i]]++;
    }
    v.push_back(dist);
    for(int i = k;i<n;i++){
        if(m[A[i-k]] == 1){
            dist--;
        }
        m[A[i-k]]--;
        if(m[A[i]] == 0){
            dist++;
        }
        m[A[i]]++;
        v.push_back(dist);
    }
    
    return v;
}

int main() {
    // your code goes here
    int t;
    cin >> t;
    while (t--) {

        int n, k;
        cin >> n >> k;
        int a[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        countDistinct(a, k, n);
        cout << endl;
    }
    return 0;
}