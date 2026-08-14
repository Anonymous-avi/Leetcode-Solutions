class Solution {

    public:
    void dfsHelper(int node , vector<vector<int>>& isConnected , vector<bool>&vis ){
        vis[node]=1;
        for(int j=0 ; j<isConnected.size() ; j++){
            if(isConnected[node][j]==1 && !vis[j]){
                dfsHelper(j,isConnected,vis);
            }
        }
    }
   
public:
    int findCircleNum(vector<vector<int>>& isConnected) {
        int node=0;
        int n=isConnected.size();
        int count=0;
        vector<bool>vis(n,0);
        for(int i=0 ; i<n ; i++){
            if(!vis[i]){
            dfsHelper(i,isConnected,vis);
            count++;
            }
        }

        return count;
      
    }
};