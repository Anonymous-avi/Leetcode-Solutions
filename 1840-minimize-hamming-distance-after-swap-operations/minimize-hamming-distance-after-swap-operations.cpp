class Solution {
public:
    void dfs(int node, vector<vector<int>>& adj, vector<int>& vis, vector<int>& comp){
        vis[node] = 1;
        comp.push_back(node);

        for(int nbr : adj[node]){
            if(!vis[nbr]){
                dfs(nbr, adj, vis, comp);
            }
        }
    }

    int minimumHammingDistance(vector<int>& source, vector<int>& target, vector<vector<int>>& allowedSwaps) {

        int n = source.size();

        vector<vector<int>> adj(n);

        for(int i=0;i<allowedSwaps.size();i++){
            int u = allowedSwaps[i][0];
            int v = allowedSwaps[i][1];

            adj[u].push_back(v);
            adj[v].push_back(u);
        }

        vector<int> vis(n,0);

        int ans = 0;

        for(int i=0;i<n;i++){

            if(!vis[i]){

                vector<int> comp;
                dfs(i, adj, vis, comp);

                unordered_map<int,int> mp;

                for(int idx : comp){
                    mp[source[idx]]++;
                }

                for(int idx : comp){

                    if(mp[target[idx]] > 0){
                        mp[target[idx]]--;
                    }
                    else{
                        ans++;
                    }
                }
            }
        }

        return ans;
    }
};