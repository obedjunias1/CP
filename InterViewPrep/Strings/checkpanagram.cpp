/*https://practice.geeksforgeeks.org/problems/pangram-checking-1587115620/1
16-08-2020 14:32:48*/


bool checkPangram (string &str)
{
    // your code here
    string purestr = "";
    int carray [26] = {0};
    for(int i=0;str[i];i++){
        if(isalnum(str[i])){
            purestr+=(tolower(str[i]));
        }
        
    }
    for(char c:purestr){
        carray[c-'a']++;
    }
    for(int ct : carray){
        if(ct == 0){
            return false;
        }
    }
    
    return true;
}
