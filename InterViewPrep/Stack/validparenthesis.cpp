/*https://leetcode.com/problems/valid-parentheses/
21-08-2020 12:12:46*/
/*#include <stack>

class Solution {
public:
    bool isValid(string s) {
        stack<char> paren;
        for (char& c : s) {
            switch (c) {
                case '(': 
                case '{': 
                case '[': paren.push(c); break;
                case ')': if (paren.empty() || paren.top()!='(') return false; else paren.pop(); break;
                case '}': if (paren.empty() || paren.top()!='{') return false; else paren.pop(); break;
                case ']': if (paren.empty() || paren.top()!='[') return false; else paren.pop(); break;
                default: ; // pass
            }
        }
        return paren.empty() ;
    }
};
*/
/*bool isValid2(string s) {
    stack<char> stk;
    for(const auto& c : s){
        switch(c){
            case '{':  stk.push('}'); break;
            case '[':  stk.push(']'); break;
            case '(':  stk.push(')'); break;
            case '}':
            case ']':
            case ')':
                if(stk.size() == 0 || c != stk.top()) return false;
                else stk.pop();
            default: ;  // do nothing for invalid inputs
        }
    }
    return stk.size() == 0;
}
*/
class Solution {
public:
    bool isValid(string s) {
        
        if(s.length()==1){
            return false;
        }
        stack<char> st;
        int ct = 0;
        int maxx = 0;
        for(int i=0;i<s.length();i++){
            if(s[i] == '(' || s[i] == '[' || s[i] == '{'){
                st.push(s[i]);
            }
            else{
                if (!(st.empty())){ 
                    char x = st.top();
                    if(s[i] == ')'){
                        if(x != '('){
                            return false;
                        }
                    }
                    else if(s[i] == ']'){
                        if(x != '['){
                            return false;
                        }
                    }
                    else if(s[i] == '}'){
                        if(x != '{'){
                            return false;
                        }
                    }
                    st.pop();
                }
                else
                return false;
            }
        }
        if(st.empty())
            return true;
        return false;
    }

};