class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
       int m=accounts.size();
       int n=accounts[0].size();
       int sum=0;
       int maxi=INT_MIN;
       for(int i=0 ; i<m ; i++){
        for(int j=0 ; j<n ; j++){
            sum=sum+accounts[i][j];
            maxi=max(maxi,sum);

        }
        sum=0;

      }
      return maxi;
    }
};