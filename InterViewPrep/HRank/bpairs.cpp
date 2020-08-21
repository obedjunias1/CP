#include <bits/stdc++.h>
using namespace std;

int beautifulPairs(vector<int> A, vector<int> B) {
    int ct =0;
    for(auto i= A.begin();i!=A.end();i++){
        
        for(auto j = B.begin();j!=B.end();j++){
            if(*i == *j){
                ct++;
                A.erase(i);
                // cout<<*A.begin();
                // if (i != A.begin())
                //     i--;
                
                B.erase(j);
            }
        }
        if(i!=A.begin()){ 
            i--;
        }
    }
    // cout<<ct<<" ";
    for(int x:A){ 
        cout<<x<<" ";
    }
    return ct;
}
int main(){

    int n,val;
    vector<int> A, B;
    cin>>n;
    for(int i=0;i<n;i++){ 
        cin>>val;
        A.push_back(val);
    }
    for(int i=0;i<n;i++){ 
        cin>>val;
        B.push_back(val);
    }
    cout<<beautifulPairs(A, B);
    return 0;
}