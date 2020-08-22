/*https://practice.geeksforgeeks.org/problems/equilibrium-point/0
21-08-2020 19:59:03*/
#include<bits/stdc++.h>
using namespace std;
int main()
 {  
    int t,n,val;
    
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin>>t;
    while(t--){
        cin>>n;
        vector<int> v;
        for(int i =0;i<n;i++){
            cin>>val;
            v.push_back(val);
        }
        int low = 0;
        int high = n-1;
        int low_sum = v[low++];
        int high_sum = v[high--];
        
        while(low<high){
            if(low_sum < high_sum){
                low_sum+=v[low++];
            }
            else if(low_sum > high_sum){
                high_sum+=v[high--];
            }
            else{
                low_sum+=v[low++];
                high_sum+=v[high--];
            }
        }
        // cout<<low<<" "<<high;
        if(v.size() == 1){
            cout<<1;
        }
        else if(v.size() == 2){
            cout<<-1;
        }
        else if(low>=high){
            if(low_sum == high_sum){
                cout<<low+1;
            }
            else{
                cout<<-1;
            }
        }
        cout<<endl;
    }
	return 0;
}