/* explanation---> https://leetcode.com/problems/palindrome-number/solution/
21-08-2020 12:33:16*/

class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0 || (x%10 == 0 && x!=0)){
            return false;
        }   
        int reverse = 0;
        while(x>reverse){
            reverse = reverse*10+(x%10);
            x/=10;
        }
        if (x == reverse || x == reverse/10){
            return true;
        }
        return false;
    }
};