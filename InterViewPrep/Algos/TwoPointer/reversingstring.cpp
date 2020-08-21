/*https://leetcode.com/articles/two-pointer-technique/
15-08-2020 18:48:35*/

#include<bits/stdc++.h>
using namespace std;

void reverse(string str) {
    int i = 0, j = str.length - 1;
    while (i < j) {
        swap(str, i, j);
        i++;
        j--;
    }
}