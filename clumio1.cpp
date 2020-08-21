
#include<bits/stdc++.h>
using namespace std;

int rec(int n){
	int sm = 0;
	while(n!=0){
			sm+=(n%10);
			n=n/10;
		}
		return sm;
}
int  sum(int n){
	int c = rec(n);
	if (c > 9)
	{
		c = rec(c);
	}
	return c;
}

int main(){
	int lL,hL;
	set<int> dig,res;
	vector<int> s;
	map<int, int> mp;
	cout << "lL: ";
	cin>>lL;
	cout<<"hL: ";
	cin >> hL;
	for (int i = lL; i <= hL; i++)
	{
		dig.insert(i);
		s.push_back(sum(i));
	}
	
	for(int x: s){
		mp[x] += 1;
	}
	int m = -1;
	int k;
	int ct = 0;
	for (int x : s)
	{
		if (mp[x] > m){
			m = mp[x];
		}
	}
	for(int x: s){
		if (mp[x] == m){
			res.insert(x);
		}
	}

	if(m == 1){
		cout << dig.size() << " " << m;
	}
	else{
		cout << res.size() << " " << m;
	}
	cout << endl;
	return 0;
}

