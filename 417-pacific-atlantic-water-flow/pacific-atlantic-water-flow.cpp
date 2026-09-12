class Solution {
public:
   
   vector<vector<int>>directions = {{1,0},{-1,0},{0,-1},{0,1}};
  
  void dfs(vector<vector<int>>&heights , int i , int j , int prevCellVal , vector<vector<bool>>&visited){
    if(i<0 || i>=heights.size() || j<0 || j>=heights[0].size() ){
        return;
    }
    if(heights[i][j]<prevCellVal || visited[i][j]==true){
        return;
    }
    visited[i][j]=true;
    for(auto &dir : directions){
        int i_ = i + dir[0];
        int j_ = j + dir[1];

        dfs(heights , i_ , j_ , heights[i][j] , visited);
    }
  }


    vector<vector<int>> pacificAtlantic(vector<vector<int>>& heights) {
        int n = heights.size();
        int m = heights[0].size();

        vector<vector<int>>results;
        vector<vector<bool>>pacificVisited(n,vector<bool>(m,false)); //the true cells are those from which water can be transferred to pacific
        vector<vector<bool>>atlanticVisited(n,vector<bool>(m,false));//the true cells are those which water can be transferred to the atlantic 

        //now for pacificVisited the top and for atlanticVisited the bootm row will be true as from there water can be transferred to the respective oceans whitout any checking 
        for(int j=0;  j<m ; j++){
            dfs(heights,0,j,INT_MIN,pacificVisited);
            dfs(heights,n-1,j,INT_MIN,atlanticVisited);
        }

        //now 1st column will be true for pacific and last column will be true for atlantic always as water can be transferred from there to the respective oceans without checking 

        for(int i=0 ; i<n ; i++){
            dfs(heights,i,0,INT_MIN,pacificVisited);
            dfs(heights,i,m-1,INT_MIN,atlanticVisited);
        }

        for(int i=0 ; i<n ; i++){
            for(int j=0 ; j<m ; j++){
                if(pacificVisited[i][j]==true && atlanticVisited[i][j]==true){
                    results.push_back({i,j});
                }

            }
        }

        return results;

    }
};