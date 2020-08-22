#include<bits/stdc++.h>
using namespace std;

void printspiral(int m,int n,vector<vector<int>> arr){
    int a = 0;
    int b = 0;
    while(a<m && b<n){ 
        
        for(int i = b;i<n;i++){
            cout << arr[a][i] << " ";
        }
        a++;
        for (int i = a; i < m;i++){
            cout << arr[i][n - 1] << " ";
        }
        n--;

        if(a<m){
            for (int i = n - 1; i >= b;i--){
                cout << arr[m - 1][i] << " ";
            }
            m--;
        }
        if(b<n){
            for (int i = m - 1; i >= a;i--){
                cout << arr[b][i] << " ";
            }
            b++;
        }
    }
    // cout<<arr[a][b]<<" ";


}
int main(){
    int m, n,val;
    vector<vector<int>> a  { { 1, 2, 3, 4, 5, 6 }, 
                    { 7, 8, 9, 10, 11, 12 }, 
                    { 13, 14, 15, 16, 17, 18 } }; 
        
        printspiral(a.size(),a[0].size(),a);
        cout<<endl;
}