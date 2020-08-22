/*https://practice.geeksforgeeks.org/problems/subarray-with-given-sum/0
21-08-2020 15:22:29
Input:
2
5 12
1 2 3 7 5
10 15
1 2 3 4 5 6 7 8 9 10
Output:
2 4
1 5*/
#include<bits/stdc++.h>
using namespace std;
int main()
 {  
    int t,n,val,k;
    
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin>>t;
    while(t--){
        cin>>n>>k;
        vector<int> v;
        for(int i=0;i<n;i++){
            cin>>val;
            v.push_back(val);
        }
        int start = 0;
        int last = 0;
        int s = 0;
        bool flag = false;
        while(last<n){
            s+=v[last];
            if(s>k){
                while(s>k){
                    s-=v[start];
                    start++;
                    if(s==k){
                        break;
                    }
                }
            }
            if(s == k){
                flag = true;
                cout<<start+1<<" "<<last+1<<endl;
                break;
            }
            last++;
        }
        if(!flag){
            cout<<-1<<endl;
        }
        
    }


	//code
	return 0;
}
