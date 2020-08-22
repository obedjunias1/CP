/*https://practice.geeksforgeeks.org/problems/reverse-array-in-groups/0
21-08-2020 22:38:06
2
5 3
1 2 3 4 5
6 2
10 20 30 40 50 60*/
/*import java.io.*;
import java.util.*;

class GFG {
    
    // Function to reverse array in group of k 
    public static void reverseInGroup(int arr[], int n, int k) {
        for (int i = 0; i < n; i += k) { 
            int left = i; 
            // to handle case when k is not multiple of n 
            int right = Math.min(i + k - 1, n - 1); 
            int temp; 
            // reverse the sub-array [left, right] 
            while (left < right) { 
                temp=arr[left]; 
                arr[left]=arr[right]; 
                arr[right]=temp; 
                left+=1; 
                right-=1; 
            } 
        }
    }
    
	public static void main (String[] args) throws IOException {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		int t = Integer.parseInt(br.readLine().trim()); //Inputting the testcases
		while(t-->0){
		    String inputLine1[] = br.readLine().trim().split(" ");
		    int n = Integer.parseInt(inputLine1[0]);
		    int k = Integer.parseInt(inputLine1[1]);
		    int arr[] = new int[n];
		    String inputLine2[] = br.readLine().trim().split(" ");
		    for(int i=0; i<n; i++){
		        arr[i]=Integer.parseInt(inputLine2[i]);
		    }
		    reverseInGroup(arr, n, k);
		    StringBuffer str = new StringBuffer();
		    for(int i=0; i<n; i++){
		        str.append(arr[i] + " ");
		    }
		    System.out.println(str);
		}
	}
}

*/
#include<bits/stdc++.h>
using namespace std;
int main()
 {  
    int t,n,val,k;
    
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin>>t;
    while(t--){
        cin>>n>>k;
        vector<int> v;
        for(int i=0;i<n;i++){
            cin>>val;
            v.push_back(val);
        }
        stack<int> s;
        int ct = 0;
        for(int i = 0;i<n;i++){
            if(ct<k){
                s.push(v[i]);
                ct++;
            }
            if(ct == k || i == n-1){
            while(ct>=0 && !s.empty()){
                cout<<s.top()<<" ";
                s.pop();
                ct--;
            }
            }
        }
        cout<<endl;
    }
	return 0;
}
/*
#include <bits/stdc++.h>
using namespace std;

vector<long long> mv; //Declaring a vector mv

int main() {
    
    long long t; //Testcases
    cin >> t; //input the number of testcases

    while(t--){ //while testcases exist

        long long n;
        cin >> n; //input the size of array

        long long k;
        cin >> k; //input k 

        for(long long i =0;i<n;i++){
            long long x;
            cin >> x; //input element of array

            mv.push_back(x); //push the element into vector

        }

        

        for(long long i = 0;i<n;){ //iterating over all the elements
        //There can be two conditions
        //When we have k elements from our current position
        //When k elements from current elements don't exist. In such case just reverse the remaining elements
            if(i+k < n){ //If we have k elements available

            reverse(mv.begin()+i, mv.begin()+(i+k)); //just reverse elements from i till i+k
            i+=k; //increment i so as to avoid problem of double reversal
            }
            else{//If we don't have k elements available
                reverse(mv.begin()+i, mv.end());  //Reverse from current position till end
                i+=k;
            }

        }

        for(long long i =0;i<n;i++){
            cout << mv[i] << " "; //Just print the vector
        }

        cout << endl;
        
        mv.clear(); //Clear the vector as it's globally declared


    }

}
*/