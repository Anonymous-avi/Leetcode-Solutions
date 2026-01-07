class Solution {
public:
    int subtractProductAndSum(int n) {
        int digit;
        int sum=0;
        int product=1;
        while(n>0){
            digit=n%10;
            product=product*digit;
            sum=sum+digit;
            n=n/10;
        }
        int result=product-sum;
        return result;
        
    }
};