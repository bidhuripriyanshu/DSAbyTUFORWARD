class Solution {
public:
    int lengthOfLastWord(string s) {
       int lastelement_length=0;
       int currentelement_length =0;

       for(int i=0;i<s.length();i++){
            if(s[i]!=' '){

                currentelement_length +=1;
        }
            else if( currentelement_length>0){
                lastelement_length = currentelement_length;
                 currentelement_length=0;
            }

       } 
         if( currentelement_length>0){
             lastelement_length= currentelement_length;
       }
       return lastelement_length;
            
        
    }
};
