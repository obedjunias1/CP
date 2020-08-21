#include<bits/stdc++.h>
using namespace std;
vector<int> a;
vector<int> seg;
void buildTree(int ind,int low,int high){
    if(low>high){
        return;
    }

    if(low == high){
        seg[ind] = a[low];
        return;
    }

    int mid = (low+high)/2;
    buildTree(2 * ind + 1, low, mid);
    buildTree(2 * ind + 2, mid + 1, high);
    seg[ind] = min(seg[2 * ind + 1], seg[2 * ind + 2]);
}
int main(){
    int n,val;
    cin >> n;
    for (int i = 0; i < n;i++){
        cin >> val;
        a.push_back(val);
    }
    cout << endl;
    buildTree(0, 0, n-1);
    
    cout << endl;
    return 0;
}

