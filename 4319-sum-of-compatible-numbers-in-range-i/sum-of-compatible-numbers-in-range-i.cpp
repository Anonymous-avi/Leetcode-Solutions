class Solution {
public:
    int sumOfGoodIntegers(int n, int k) {
       
        int sum=0;

        for (int x=1 ; x<=1000 ; x++){
            int res= n & x;
            if((abs(n-x)<=k) & (res==0)){
                
                sum=sum+x;
            }
        }
        return sum;
        
        
    }
};