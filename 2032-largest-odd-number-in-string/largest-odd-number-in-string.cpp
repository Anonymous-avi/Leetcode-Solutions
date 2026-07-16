class Solution {
public:
    string largestOddNumber(string num) {
       //best way sirf last se ek odd number dekh lo fir woh longest odd substring ban jaayegi
       for(int i=num.size()-1 ; i>=0 ; i--){
        if((num[i]-'0')%2==1)
        {
      return num.substr(0,i+1);
      }      
       }
     //i+1 showing the length and 0 se start karke utni length ki substring return kardenge 
       
     return "";
        
    }
};