class Solution {
public:
    int mySqrt(int x) {
        if(x==0)
        return 0;
        for(int i=1 ; ; i++){
            if((long long)i*i>x){
            return i-1;
            }
        }
        
    }
};