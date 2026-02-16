class Solution {
public:
    int minSensors(int n, int m, int k) {
        int result1= (n+2*k)/(2*k+1);
        int result2=(m+2*k)/(2*k+1);
        int final_result= result1*result2;
        return final_result;

        
    }
};