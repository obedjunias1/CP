/*12-08-2020 16:09:39
https://practice.geeksforgeeks.org/problems/maximum-of-all-subarrays-of-size-k/0 */
//-----------Naive--------------o(n*k)
//  int maxx =INT_MIN;
//         for(int i=0;i<n-k+1;i++){
//             int maxx = v[i];
//             for(int j = 0;j<k;j++){
//                 maxx = max(maxx,v[i+j]);
//             }
//             cout<<maxx<<" ";
//         }

//13-08-2020 14:59:16
#include <bits/stdc++.h>
using namespace std;

int main() {
	//code
	int t,n,k,val;
	ios_base::sync_with_stdio(0);
    cin.tie(0);
	cin>>t;
	while(t--){
	    cin>>n>>k;
        vector<int> v;
        deque<int> q(k);
        for(int i=0;i<k;i++){
            cin>>val;
            v.push_back(val);
            while(!(q.empty()) && val>=v[q.back()]){
                q.pop_back();
            }
            q.push_back(i);
        }
        // int maxx =INT_MIN;
        // for(int i=0;i<n-k+1;i++){
        //     int maxx = v[i];
        //     for(int j = 0;j<k;j++){
        //         maxx = max(maxx,v[i+j]);
        //     }
        //     cout<<maxx<<" ";
        // }
        cout<<v[q.front()]<<" ";
        for(int i=k;i<n;i++){
            cin>>val;
            v.push_back(val);
            // cout<<q.front()<<" ";
            while(!(q.empty()) && val>=v[q.back()]){
                q.pop_back();
            }
            
            if(!(q.empty()) && q.front() == i-k){
                q.pop_front();
            }
            
            q.push_back(i);
            cout<<v[q.front()]<<" ";
        }
        // cout<<q.front()<<" ";
        cout<<endl;
    }
	
	return 0;
}