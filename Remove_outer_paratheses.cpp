class Solution {
public:
    string removeOuterParentheses(string s) {
          string str ="";
       int size = s.size();
       int opencount=0;//--->Counting the outer parathensis
     for(int i=0;i<size;i++){
           if(s[i]=='('){
              if(opencount>0){
                    str.push_back(s[i]);
              }
              opencount++;
           }
        else if(s[i]==')'){

                opencount--;

                if(opencount > 0){
                    str.push_back(s[i]);
                
                }
             }
       }
       return str;
    }
};
