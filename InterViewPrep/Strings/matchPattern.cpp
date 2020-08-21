/*https://practice.geeksforgeeks.org/problems/match-specific-pattern/1
16-08-2020 15:39:11*/
string encode(string s){
    string encoded = "";
        unordered_map<char,int> m;
        int code = 1;
        for(int i = 0;s[i];i++){
            if(m.find(s[i]) == m.end()){
                m[s[i]] = code++;
            }
        }
        for(int i=0;s[i];i++){
            encoded+=to_string(m[s[i]]);
        }
    return encoded;
}
string verify(string s,string p){
    if(encode(s) == encode(p)){
        return s;
    }
    return " ";
}
vector<string> findMatchedWords(vector<string> dict,string pattern)
{
       vector<string> codes;
       vector<string> t;
       for(string s :dict){
           s = verify(s,pattern);
           if(s!=" ")
                codes.push_back(s);
       }
       return codes;
}