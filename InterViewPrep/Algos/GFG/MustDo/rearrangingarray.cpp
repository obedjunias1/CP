/*https://practice.geeksforgeeks.org/problems/-rearrange-array-alternately/0/
21-08-2020 18:48:10*/




/*
O(n) time and O(n) space**
vector<int> res;
        if(v.size() == 1){
            res.push_back(v[0]);
        }
        int i =0;
        int j= n-1;
        while(i<j){
            res.push_back(v[j--]);
            res.push_back(v[i++]);
            if(i == j){
                res.push_back(v[i]);
            }
        }
        for(int x: res){
            cout<<x<<" ";
        }
        cout<<endl;
        */
//https://www.youtube.com/watch?v=KOglcclYgXI#action=share <- reference
#include<bits/stdc++.h>
using namespace std;
int main()
 {  
    int t,n;
    long long val;
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin>>t;
    while(t--){
        cin>>n;
        vector<long long> v;
        for(int i=0;i<n;i++){
            cin>>val;
            v.push_back(val);
        }
        
        long long max_element = v[n-1] + 1;
        int max_ind = n-1;
        int min_ind = 0;
        for(int i = 0;i<n;i++){
            if(i%2 == 0){
                v[i] = v[i] + (v[max_ind]%max_element)*max_element;
                // cout<<v[i]<<" ";
                max_ind--;
            }
            else{
                v[i] = v[i] + (v[min_ind]%max_element)*max_element;
                // cout<<v[i]<<" ";
                min_ind++;
            }
        }
        for(int i = 0;i<n;i++){
            v[i]/=max_element;
        }
        for(long long x: v){
            cout<<x<<" ";
        }
        cout<<endl;
    }


	//code
	return 0;
}