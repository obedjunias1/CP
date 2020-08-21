#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,val;
    cout << "n: ";
    cin >> n;

    int v[n];
   
    cout << "enter values: " << endl;
    for (int i = 0;i<n;i++){
        cin >> v[i];
    }
    int ct = 1;
    int maj = 0;
    for (int i = 1; i < n;i++){
        if (v[maj] == v[i]){
            ct++;
        }
        else{
            ct--;
        }
        if(ct == 0){
            maj = i;
            ct = 1;
        }
    
    }


    if(count(v,v+n,v[maj]) > (n/2)){
        cout << "maj; "<< v[maj] << endl;
    }
    else{
        cout << "No such element" << endl;
    }
        return 0;
}
