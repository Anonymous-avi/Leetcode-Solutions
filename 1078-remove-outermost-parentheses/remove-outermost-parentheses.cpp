class Solution {
public:
    string removeOuterParentheses(string s) {
       int counter=0;
       string ans="";
       for(int i=0 ; i<s.size() ; i++){
        if(s[i]=='('){ //pehle yeh chck karna hai ki kahi counter 0 toh nhi ...agar ocunter 0 hai toh woh primitive string ka opening bracket hi hoga obviously 
        //usse ans string mei add hi nhi karenge....bas counter++ kardenge 
            if(counter==0){
                counter++;
            }
            else{
                ans=ans+s[i];
                counter++;
            }
        }
        else{//same chack for closing bracket ..par pehle ismei counter-- karna padega agar woh 0 ke equal ho jaaye mtlb woh closing bracket hai primitive string ka 
            counter--;
            if(counter!=0){
                ans=ans+s[i];
            }
        }
       }
       return ans;
        
    }
};