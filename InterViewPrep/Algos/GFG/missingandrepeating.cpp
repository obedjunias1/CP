/*https://practice.geeksforgeeks.org/problems/find-missing-and-repeating/0*/
/*
 long long int x = (n*(n+1))/2 - sum_n;
        long long int y = ((n*(n+1)*(2*n+1))/6 - sum_n2)/x;
                                                  |
                                                sum of sqrs                                                
        cout<<(y-x)/2<<" "<<(x+y)/2<<endl;
        */
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
        
        for(int i = 0;i<n;i++){
            cin>>val;
            v.push_back(val);
        }
        int notfound,duplicate;
        // int num = v[0];
        for(int i =0;i<n;i++){
            if(v[abs(v[i])-1]>0){
                v[abs(v[i])-1] *=-1;
            }
            else{
                duplicate = abs(v[i]);
                
            }
                
        }
        for(int i=0;i<n;i++){
            if (v[i]>0){
                notfound = i+1;
                break;
            }
        }
        cout<<duplicate<<" "<<notfound<<endl;
        // cout<<endl;
        
    }


	//code
	return 0;
}