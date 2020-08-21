/*12-08-2020 15:18:08
https://practice.geeksforgeeks.org/problems/first-negative-integer-in-every-window-of-size-k/0
*/
//---------------Naive Solution------------O(n*k)
/*#include<bits/stdc++.h>
using namespace std;
int main()
 {  
     int t,n,k,val;

    cin>>t;
    while(t--){
        cin>>n;
        deque<int> q;
        for(int i=0;i<n;i++){
            cin>>val;
            q.push_back(val);
        }
        cin>>k;
        
        for(int i=0;i<n-k+1;i++){
            bool flag = false;
            for(int j=0;j<k;j++){
                if(q[i+j]<0){
                    cout<<q[i+j]<<" ";
                    flag = !flag;
                    break;
                }
                
            }
            if(!flag){
            cout<<0<<" ";
        }
        }
        
        cout<<endl;
    }


	//code
	return 0;
}*/
#include<bits/stdc++.h>
using namespace std;
int main()
 {  
     int t,n,k,val;
    
    cin>>t;
    while(t--){
        cin>>n;
        vector<int> v;
        queue<int> q;
        for(int i=0;i<n;i++){
            cin>>val;
            v.push_back(val);
        }
        cin>>k;
        for(int i=0;i<k;i++){
            if(v[i] < 0){
                q.push(v[i]);
            }
        }
        if(q.empty()){
            cout<<0<<" ";
        }
        else{
            cout<<q.front()<<" ";
        }
        for(int i =k;i<n;i++){
            if(v[i-k] == q.front())
                q.pop();
            if(v[i]<0){
                q.push(v[i]);
            }
            if(q.empty()){
                cout<<0<<" ";
            }
            else{
                cout<<q.front()<<" ";
            }
        }
        cout<<endl;
    }


	//code
	return 0;
}
