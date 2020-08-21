#include<bits/stdc++.h>
using namespace std;

int main(){

    vector<int> v ={ 1, 2, 2, 3, 3, 4, 5, 6, 8 };
    for(int x : v){ 
        cout<<x<<" ";
    }
    cout<<endl;
    v.erase(v.begin()+1);
    for(int x : v){ 
        cout<<x<<" ";
    }
    cout<<endl;
    return 0;
}