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


    int n,k;
    cout << "enter n: ";
    cin>>n;
    cout << "binary: ";
    showbits(n);
    cout << "1's complement: ";
    k = ~n;
    cout << k << endl;
    cout << "binary: ";
    showbits(k);
    cout << "right shifted once: ";
    k = n >> 1;
    cout << k << endl;
    cout << "binary: ";
    showbits(k);
    cout << "right shifted twice: ";
    k = n >> 2;
    cout << k << endl;
    cout << "binary: ";
    showbits(k);
    cout << "left shifted once: ";
    k = n << 1;
    cout << k << endl;
    cout << "binary: ";
    showbits(k);
    cout << "left shifted twice: ";
    k = n << 2;
    cout << k << endl;
    cout << "binary: ";
    showbits(k);
    cout << endl;

    return 0;
}