/*https://practice.geeksforgeeks.org/problems/number-of-pairs/0/
28-08-2020 12:49:58
https://www.youtube.com/watch?time_continue=1111&v=SdFnAkIfL2M&feature=emb_logo
https://www.geeksforgeeks.org/find-number-pairs-xy-yx/ 
Input
1
3 2
2 1 6
1 5

Output
3

Explanation:
Testcase 1: The pairs which follow xy > yx are as such: 21 > 12,  25 > 52 and 61 > 16  */
#include<bits/stdc++.h>
using namespace std;
int main()
 {  
    long long t,n1,n2,val;
    
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin>>t;
    while(t--){
        long long pairs = 0;
        cin>>n1>>n2;
        long long x[n1],y[n2];
        map<long long,long long> mp;
        for(int i=0;i<n1;i++){
            cin>>x[i];
            
        }
        for(int i=0;i<n2;i++){
            cin>>y[i];
            if(y[i] < 5){
                mp[y[i]]++;
            }
        }
        sort(y,y+n2);
        
        for(int i = 0;i<n1;i++){
            if(x[i] == 0){
                    pairs+=0;
                    continue;
                }
            if(x[i] == 1){
                pairs+=mp[0];
                continue;
            }
            
            long long *idx = upper_bound(y,y+n2,x[i]);
            pairs+=((y+n2)-idx+mp[0]+mp[1]);
            if (x[i] == 3){
                pairs+=mp[2];
            }
            if(x[i] == 2){
                pairs-=mp[3];
                pairs-=mp[4];
            }
                // cout<<n2<<" "<<*idx
           
        }
        cout<<pairs<<endl;
    }
	//code
	return 0;
}
