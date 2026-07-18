class Solution {
public:
    int maxDepth(const string &s) {
       int count=0;
       int maxi=INT_MIN;
       for(int i=0 ; i<s.size() ; i++){
        if(s[i]=='('){
            count++;
            
        }//yaha normal else nhi lagaayenge coz warna har character ka count-- ho jaayega par hame sirf ')' character ka count -- karna hai
        else if(s[i]==')'){
            count--;
        }
        maxi=max(maxi,count);
       } 
       return maxi;       
    }
};