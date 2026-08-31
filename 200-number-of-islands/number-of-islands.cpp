class Solution {
    private :
    void dfs(int i , int j , vector<vector<bool>>&vis , vector<vector<char>>&grid , int n , int m){

        if(i<0 || j<0 || i>=n || j>=m || vis[i][j] || grid[i][j]!='1'){
            return;
        } //'1' because grid consists of characters only 
        
        vis[i][j]=true;

        //now call dfs for neighbours 
        dfs(i-1,j,vis,grid,n,m); //top
        dfs(i,j-1,vis,grid,n,m); //left
        dfs(i+1,j,vis,grid,n,m); //bottom
        dfs(i,j+1,vis,grid,n,m); //right

    }
public:
    int numIslands(vector<vector<char>>& grid) {
        int count=0;
        int n=grid.size();
        int m = grid[0].size();

        vector<vector<bool>>vis(n,vector<bool>(m,false));
         
        //dfs ham kispe perform karenge ? uske liye hame har ek cell pe ek dfs chalana padega to find the number of islands 

        for(int i=0  ; i<n ; i++){
            for(int j=0 ; j<m ; j++){
                if(grid[i][j]=='1' && !vis[i][j]){
                    dfs(i,j,vis,grid,n,m); //1 component 
                    count++;
                }
            }
        }
        return count;

    }
};