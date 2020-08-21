/*https://leetcode.com/problems/valid-palindrome/discuss/40261/Passed-clean-c%2B%2B-code
15-08-2020 23:11:38*/
/*
bool isPalindrome(string s) {
	int start=0, end=s.length()-1;
	while(start<end) {
		if (!isalnum(s[start])) start++;
		else if (!isalnum(s[end])) end--;
		else {
			if (tolower(s[start++])!=tolower(s[end--])) return false;
		}
	}
	return true;
}
*/
class Solution {
public:
    bool isPalindrome(string s) {
        string purestr = "";
        regex e (" ");
        regex m ("\\W+");
        regex un ("_");
        s = regex_replace (s,e,"");
        s = regex_replace (s,m,"");
        s = regex_replace (s,un,"");
        for(int i=0;s[i];i++){
            char c = s[i];
            if(c>=65 && c<92){
                c+=32;
            }
            purestr+=c;
        }
        int low = 0;
        int high = purestr.length()-1;
        while(low<high){
            if(purestr[low] != purestr[high]){
                return false;
            }
            low++;
            high--;
        }
        return true;
    }
};
