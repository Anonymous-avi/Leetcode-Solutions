class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int countof5=0;
        int countof10=0;
        int countof20=0;
        for(int i=0 ; i<bills.size() ; i++){
            if(bills[i]==5){
                countof5++;
            }
            else if(bills[i]==10){
                if(countof5==0) return false;
                countof10++;
                countof5--;
            
            }
            else{
               if(countof5>0 && countof10>0){
                countof5--;
                countof10--;
               }
               else if(countof5>=3){
                countof5=countof5-3;
               }
               else return false;
            }
        }
        return true;
       
        
    }
};