class Solution {
    public:
    void dfsHelper(int i , vector<vector<int>>&adj , vector<bool>&vis){
        vis[i]=true;
        int n=adj.size();
        for(int j=0 ; j<n ; j++){
            if(adj[i][j]==1 && !vis[j]){
                dfsHelper(j,adj,vis);
            }
        }
    }
public:
    int findCircleNum(vector<vector<int>>& isConnected) {
       int numofprovinces=0;
       int n=isConnected.size();
       vector<bool>visi(n,false);
       for(int i=0 ; i<n ; i++){
        if(!visi[i]){
            dfsHelper(i,isConnected,visi);
            numofprovinces++;
        }
       }
       return numofprovinces;

    }
};