#include<bits/stdc++.h>
using namespace std;

int main(){
    unsigned int n;
    cout << "n: ";
    cin>>n;
    if(n>pow(2,32))
    {
        cout<<-1;
    }
    else
    {
        n = ~n;
        printf("%d ", n);
        cout << " " << n << endl;
    }
}