class Solution {
    public:
    bool isPrime(int n){
        if(n<=1)
        return false;
        for(int i=2 ; i<=n-1 ; i++){
            if(n%i==0)
            return false;
        }
        return true;
    }
public:
    int smallestEvenMultiple(int n) {
        if(n==2){
            return 2;
        }
       else if(n%2!=0 || isPrime(n)==true){
            return 2*n;
        }
        else
        return n;
        
        
    }
};