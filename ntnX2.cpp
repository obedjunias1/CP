#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,val;
    cout << "n: ";
    cin >> n;
    vector<int> v(n);
    cout << "enter values: " << endl;
    for (int i = 0; i < n;i++){
        cin >> val;
        v.push_back(val);
    }
    sort(v.begin(), v.end(), greater<int>());
    int b1 = 0;
    int b2=0;
    b1 += v[0];
    for (int i = 1; i < n;i++){
        if(b1>b2){
            b2 += v[i];
        }
        else{
            b1 += v[i];
        }
    }
    cout << max(b1, b2) << endl;
    return 0;
}