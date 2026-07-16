class Solution {
public:
    string removeOuterParentheses(string s) {
       int counter=0;
       string ans="";
       for(int i=0 ; i<s.size() ; i++){
        if(s[i]=='('){
            if(counter==0){
                counter++;
            }
            else{
                ans=ans+s[i];
                counter++;
            }
        }
        else{
            counter--;
            if(counter!=0){
                ans=ans+s[i];
            }
        }
       }
       return ans;
        
    }
};