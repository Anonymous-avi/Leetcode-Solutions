class Solution {
public:
    bool rotateString(string s, string goal) {
        if(s.size()!=goal.size()){
            return false;
        }

        if(s==goal){
            return true;
        }
        for(int k=0 ; k<s.size() ; k++){
             char c =s[0];
        for(int i=0 ; i<s.size()-1 ; i++){
            s[i]=s[i+1];
            
        }
         s[s.size()-1]=c;

         if(s==goal){
            return true;
         }
        }
        return false;
        
    }
};