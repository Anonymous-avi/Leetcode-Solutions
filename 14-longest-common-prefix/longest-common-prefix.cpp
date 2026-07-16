class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans="";
        //pehle 1st string ko as reference leke uske har character ko traverse karenge 
       for(int i=0 ; i<strs[0].size() ; i++){
        //saath j ko use karenge baaki strings ke ussi charater number ko check karne ke liye 
        for(int j=1 ; j<strs.size() ; j++){
            //hum check karenge pehle ki kahi i wala reference charater cross toh nhi kar gaya j waale ko....mwans i ka size j se bada hogaya ...or agar dono characters different hai ...in dono conditions pe ans resturn kar denge 
            if(i>=strs[j].size() || strs[j][i]!=strs[0][i]){
                return ans;
            }

        }
        ans=ans+strs[0][i];
       }

       return ans;

        
    }
};