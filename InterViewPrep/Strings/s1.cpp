#include<bits/stdc++.h>
using namespace std;

int main(){
    string s = "Obed Junias";
    s+="c";
    cout<<s.at(5)<<endl;
    cout<<s<<" "<<endl;
    // or append
    s.append( "abc");
    string s1 = "abcedf";
    cout<<s<<endl;
    s.append(s1, 3, 5);
    cout<<s<<endl;
    int x = s.find("Jun");
    cout<<x<<endl;
    cout<<s.substr(x, 3)<<endl;//second argment no. of chars
    cout<<s.substr(3)<<endl;// 3 to end
    x = s.find("c");
    s.erase(x);//erase from index x to end 
    cout<<s<<endl;
    s.erase(4, 7);
    cout<<s<<endl;

    return 0;
}