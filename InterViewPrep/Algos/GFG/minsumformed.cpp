/* https://practice.geeksforgeeks.org/problems/min-sum-formed-by-digits/0 */

#include<bits/stdc++.h>

using namespace std;
int createNum(vector<int> v){
    int n = v.size();
    int num1 = 0;
    int num2 = 0;
    int i,p;
    if(n%2 == 0)
        i = (n/2)-1;
    else
        i = (n/2);
    int ind = 0;
    while(ind<n-1){
        if (i>=0)
            p = pow(10,i);
        num1 += p*v[ind];
        num2 += p*v[ind+1];
        i--;
        ind+=2;
    }
    return num1+num2;
    
}
int main()
 {  
    int t,n,val;

    cin>>t;
    while(t--){
        cin>>n;
        vector<int> v(n);
        
        for(int i=0;i<n;i++){
            cin>>val;
            v.push_back(val);
        }
        sort(v.begin(),v.end());
        createNum(v);
        cout<<"\n";
    }


	//code
	return 0;
}