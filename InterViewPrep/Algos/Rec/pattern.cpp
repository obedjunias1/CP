/*https://practice.geeksforgeeks.org/problems/print-pattern/0/*/
#include<bits/stdc++.h>
using namespace std;

void rec(int n){
    if (n<=0){ 
        cout<<n<<" ";
        return;
    }
    cout<<n<<" ";
    rec(n-5);
    cout<<n<<" ";
}
int main(){
    int n;
    cin>>n;
    rec(n);
    cout<<endl;

    return 0;
}