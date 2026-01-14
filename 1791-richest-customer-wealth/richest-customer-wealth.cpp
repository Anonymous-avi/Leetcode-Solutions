class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int sum=0;
        int result=0;
        int rows=accounts.size();
        int cols=accounts[0].size();
        for(int i=0 ; i<rows ; i++){
            for(int j=0 ; j<cols ; j++){
                sum=accounts[i][j]+sum;
                result=max(result,sum);
            
               
            }
            sum=0;
           
        }
        return result;
    }
};