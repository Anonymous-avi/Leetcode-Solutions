class Solution {
public:
    int reverse(int x) {
        int rev=0;
        while(x!=0){//yaha pe >0 nhi likh sakti warna woh negative numbers ke liye pehli baar mei hi fail ho jaayega 
            int digit=x%10;
            x=x/10;

            if(rev>INT_MAX/10 || (rev==INT_MAX/10 && digit>7)){//overflow check 
                return 0;
            }
            if(rev<INT_MIN/10 || (rev==INT_MIN/10 && digit<-8)){//underflow check
                return 0;
            }

            rev=rev*10+digit;
        }

        return rev;
    }
};