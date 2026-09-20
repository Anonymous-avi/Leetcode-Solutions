class Solution {
public:
    int networkDelayTime(vector<vector<int>>& times, int n, int k) {
        
        // adjacency list
        vector<vector<pair<int, int>>> adj(n + 1);

        for (auto &edge : times) {
            int u = edge[0];
            int v = edge[1];
            int w = edge[2];

            adj[u].push_back({v, w});
        }

        // dist[i] = minimum time to reach node i from k
        vector<int> dist(n + 1, INT_MAX);

        // min heap: {distance, node}
        priority_queue<
            pair<int, int>,
            vector<pair<int, int>>,
            greater<pair<int, int>>
        > pq;

        dist[k] = 0;
        pq.push({0, k});

        while (!pq.empty()) {
            
            int time = pq.top().first;
            int node = pq.top().second;
            pq.pop();

            // Ignore outdated entry
            if (time > dist[node])
                continue;

            for (auto &neighbor : adj[node]) {
                
                int nextNode = neighbor.first;
                int weight = neighbor.second;

                // Relaxation
                if (time + weight < dist[nextNode]) {
                    dist[nextNode] = time + weight;
                    pq.push({dist[nextNode], nextNode});
                }
            }
        }

        // We need the maximum shortest distance
        int answer = 0;

        for (int i = 1; i <= n; i++) {
            
            if (dist[i] == INT_MAX)
                return -1;

            answer = max(answer, dist[i]);
        }

        return answer;
    }
};