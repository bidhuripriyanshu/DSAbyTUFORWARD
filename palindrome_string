class Solution {
public:
 char To_lowercase(char s){
    if(s>='A' && s<='Z'){
        char temp = s-'A'+'a';
        return temp;
    }
    return s;
 }
    bool isPalindrome(string s) {
        int start =0;
        int end =s.length()-1;
        while(start<end){
            if(!isalnum(s[start])){
                start++;
                continue;
            }
            if(!isalnum(s[end])){
                end--;
                continue;
            }
            if(To_lowercase(s[start])!=To_lowercase(s[end])){
                return false;
            }
            else{
                start++;
                end--;
                
               }
          }
     return true;  

    }
};
