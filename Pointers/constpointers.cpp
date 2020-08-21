#include<bits/stdc++.h>
using namespace std;

int main(){
    const int q = 5;
    int const *p = &q;
    const int q2 = 7;

    cout << *p << endl; //5
    p = &q2;
    cout << *p << endl; //7;
    //*p = 5;
    /*constpointers.cpp: In function ‘int main()’:
    constpointers.cpp:12:10: error: assignment of read-only location ‘* p’
     *p = 5;
          ^  */

    //----------------------------------------------------------------------------------------------//
    // int *const p1 =&q;
    /*constpointers.cpp: In function ‘int main()’:
    constpointers.cpp:17:21: error: invalid conversion from ‘const int*’ to ‘int*’ [-fpermissive]
     int *const p1 = &q;*/

    int q3 = 5;
    int *const p1 = &q3;//5
    int q4 = 6;
    //*p1 = &q4;
    /*constpointers.cpp: In function ‘int main()’:
    constpointers.cpp:23:11: error: invalid conversion from ‘int*’ to ‘int’ [-fpermissive]
     *p1 = &q4;
    */
    *p1 = q4;//6
    cout << *p1 << endl;

    int const* const ptr = &q3;//6
    int const* const ptr1 = &q;//5
    //*ptr = 5;//error
    //ptr = &p4;//error

    cout << *ptr1 << endl;
    return 0;
}