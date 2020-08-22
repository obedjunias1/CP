/*https://leetcode.com/discuss/interview-question/356477
22-08-2020 11:42:08*/
/*public int minTime(str) {
	int prev = 97, time = 0;                                  // ASCII code of 'a' = 97 to start with
	for(int i = 0; i < str.length(); i++) {
		time += Math.abs(str.charAt(i) - prev);
		prev = str.charAt(i);
	}	
	return time;
}
*/
#include<bits/stdc++.h>
using namespace std;
int calculate(string ch,string text){
    map<char,int> mp;
    for (int i = 0; i < ch.length();i++){
        mp[ch[i]] = i;
    }
    int j = 0;
    int total = 0;
    for (int i = 0; i < text.length();i++){
        total += (abs(mp[text[i]] - j));
        j = mp[text[i]];
    }
    return total;
}

int main(){
    cout << calculate("abcdef", "cba") << endl;

    return 0;
}