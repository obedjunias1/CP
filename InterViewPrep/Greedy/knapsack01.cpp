#include<bits/stdc++.h>
using namespace std;
int solveKnapsack(vector<int> wts,vector<int> val,int W,int n){
    if (n==0 || W==0){ 
        return 0;
    }
    else if (wts[n-1] > W){ 
        return solveKnapsack(wts, val, W, n-1);
    }
    else{ 
        return max(solveKnapsack(wts, val, W, n-1), val[n-1]+solveKnapsack(wts, val, W-wts[n-1], n-1));
    }
}
int main(){

    int n, val,W;

    cin>>n;
    vector<int> wt;
    vector<int> v;
    for(int i =0;i<n;i++){ 
        cin>>val;
        wt.push_back(val);
    }
    for(int i =0;i<n;i++){ 
        cin>>val;
        v.push_back(val);
    }
    cin>>W;
    cout<<solveKnapsack(wt, v, W, wt.size());
    cout<<endl;
    return 0;
}