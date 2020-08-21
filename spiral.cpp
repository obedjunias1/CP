#include<bits/stdc++.h>
using namespace std;

void printspiral(int a,int b,int m,int n,int **arr){
    int m1, n1, i, j;
    i = a;
    j = b;
    if(m%2 == 1){ 
        m1 = m/2;
        n1 = n/2;
    }
    else{ 
        m1 = m/2+1;
        n1 = m1 ;
    }
    while(a!=m1+1 && b!=n1+1){ 
        // cout<<a<<" "<<b<<endl;
        i = a;
        j = b;
        if(i==a && j==b){ 
            while(j<m){ 
                cout<<arr[i][j++]<<" ";
            }
            // cout<<"j "<<j<<endl;
        }
        if(i==a && j==m){ 
            j-=1;
            i+=1;
            // cout<<"i "<<i<<endl;
            // cout<<"j "<<j<<endl;
            while(i<n){ 
                cout<<arr[i++][j]<<" ";
            }
            // cout<<"i "<<i<<endl;
            // cout<<"j "<<j<<endl;
            
        }
        
        if(i==m && j==n-1){
            i-=1;
            j-=1;
            // j-=1;
            // cout<<"i "<<i<<endl;
            // cout<<"j "<<j<<endl;
            while(j>b){ 
                cout<<arr[i][j--]<<" ";
            }
            // cout<<"i "<<i<<endl;
            // cout<<"j "<<j<<endl;
        }
        if(i==n-1 && j==b){ 
            while(i>a){ 
                cout<<arr[i--][j]<<" ";
            }
            //  cout<<"i "<<i<<endl;
            // cout<<"j "<<j<<endl;
        }
        a++;
        b++;
        // cout<<a<<" "<<b<<endl;
        m--;
        n--;
    }
    // cout<<arr[a][b]<<" ";


}
int main(){
    int m, n,val;
    cin>>m>>n;
    vector<vector<int>> a;
        for(int i = 0;i<m;i++){
            vector<int> v;
            for(int j=0;i<n;j++){
                cin>>val;
                v.push_back(val);
            }
            cout<<v[0];
            a.push_back(v);
        }
        // printspiral(0,0,m,n,a);
        cout<<endl;
}