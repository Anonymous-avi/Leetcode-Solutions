class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans="";
        //pehle 1st string ko as reference leke uske har character ko traverse karenge 
       for(int i=0 ; i<strs[0].size() ; i++){
        //saath j ko use karenge baaki strings ke ussi charater number ko check karne ke liye 
        for(int j=1 ; j<strs.size() ; j++){
            if(i>=strs[j].size() || strs[j][i]!=strs[0][i]){
                return ans;
            }

        }
        ans=ans+strs[0][i];
       }

       return ans;

        
    }
};