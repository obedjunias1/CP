#include<bits/stdc++.h>
using namespace std;

int main(){

    int n, val,W;

    cin>>n;
    vector<int> wt(n);
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
    int dp[n+1][W+1];

    
    // for(int i=0;i<n+1;i++){ 
    //     dp[i][0] = 0;
    // }
    // for(int i=0;i<W+1;i++){ 
    //     dp[0][i] = 0;
    // } 

    for(int i=0;i<n+1;i++){ 
        for(int j=0;j<W+1;j++){
            if(i==0 || j==0){ 
                dp[i][j] = 0;
            }
            else if (wt[i-1] <= j){ 
                dp[i][j] = max(dp[i-1][j], v[i-1]+dp[i-1][j-wt[i-1]]);
                
            }
            else{ 
                dp[i][j] = dp[i-1][j];
            }
        }
    }
    for(int i=0;i<n+1;i++){ 
        for(int j=0;j<W+1;j++){ 
            cout<<dp[i][j]<<"\t";
        }
        cout<<endl;
    }
    cout<<dp[n][W]<<endl;
    return 0;
}