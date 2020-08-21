/*https://practice.geeksforgeeks.org/problems/count-the-zeros/0*/
/*

int firstOccurenceOfZero(int a[], int l, int h, int n)
{
    if(l<=h)
    {
       int mid = l + (h-l)/2;
       if((mid==0 || a[mid-1]==1) && a[mid]==0)
       return mid;
       else if (a[mid]==0 && a[mid-1]==0)
       return firstOccurenceOfZero(a,l,mid-1,n);
       else
       return firstOccurenceOfZero(a,mid+1,h,n);
    }
    return n;
}
cout<<n-firstOccurenceOfZero();
*/
#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
	//code
	int t,val,n;
	vector<int> v;
	cin>>t;
	while(t--){
	    cin>>n;
	    for(int i = 0;i<n;i++){
	        cin>>val;
	        v.push_back(val);
	    }
	    cout<<count(v.begin(),v.end(),0)<<endl;
	    v.clear();
	}
	return 0;
}
