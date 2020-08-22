/*https://practice.geeksforgeeks.org/problems/last-index-of-1/0
21-08-2020 23:00:57
Input:
2
00001
0
Output:
4
-1*/
#include<bits/stdc++.h>
using namespace std;
int main()
 {  
    int t,n,val;
    
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        n = s.length();
        int low = 0;
        int low_index = -1;
        int high = n-1;
        while(low<high){
            if(s[high] == '1'){
                break;
            }
            else if(s[low] == '1'){
                low_index = low;
            }
            low++;
            high--;
        }
        if(s[high] =='1'){
            cout<<high;
        }
        else if(low_index != -1){
            cout<<low_index;
        }
        else{
            cout<<-1;
        }
        cout<<endl;
    }


	//code
	return 0;
}