/*https://leetcode.com/discuss/interview-question/356520
22-08-2020 13:56:54*/

#include<bits/stdc++.h>
using namespace std;
int main()
 {  
    int t,n,val;
    
    ios_base::sync_with_stdio(0);
    cin.tie(0);
        cin>>n;
        vector<int> s;
        vector<int> e;
        for(int i=0;i<n;i++){
            cin>>val;
            s.push_back(val);
        }
        for(int i=0;i<n;i++){
            cin>>val;
            e.push_back(val);
        }
        sort(s.begin(),s.end());
        sort(e.begin(),e.end());
        int max_index;
        int max_entries = INT_MIN;
        int entries = 1;
        int j = 0;
        int i = 1;
        for(i = 1;i<s.size();){
            if(s[i] < e[j]){
                entries++;
                i++;
            }
            else if(s[i]>=e[j]){
                entries--;
                j++;
            }
            if(entries > max_entries){
                max_entries = entries;
            }
        
    }
        cout<<max_entries<<" "<<endl;

	//code
	return 0;
}