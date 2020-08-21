#include<bits/stdc++.h>
using namespace std;

void showbits(int n){
    int k, andmask;
    for (int i = 15; i >= 0;i--){
        andmask = 1 << i;
        k = n & andmask;
        if (k == 0)
            cout << "0";
        else
        {
            cout << "1";
        }
         
    }
    cout << endl;
}
int main(){
    int n,k,ans;
    cout << "enter n: ";
    cin>>n;
    cout << "binary: ";
    showbits(n);
    cout << "enter the bit number to check: ";
    cin >> k;
    ans = n & int(pow(2, k));
    if(ans == 0){
        cout << "Bit " << k << " is off";
    }
    else{
        cout << "Bit " << k << " is on";
    }
    cout << endl;
    cout << "Switching OFF a bit \n";
    cout << "enter the bit number to switch off: ";
    cin >> k;
    ans =  int(pow(2, k));
    ans = ~ans;
    
    cout << "before: ";
    showbits(n);
    cout << "after: ";
    ans = n & ans;
    showbits(ans);
    ans = n & int(pow(2, k));
    if(ans == 0){
        cout << "Bit " << k << " is off";
    }
    else{
        cout << "Bit " << k << " is on";
    }
    cout << endl;
    return 0;
}