class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {

        priority_queue<pair<double, pair<int, int>>> pq;

        for(int i = 0; i < points.size(); i++) {

            double distance = sqrt(
                points[i][0] * points[i][0] +
                points[i][1] * points[i][1]
            );

            pq.push({distance, {points[i][0], points[i][1]}});

            if(pq.size() > k) {
                pq.pop();
            }
        }

        vector<vector<int>> result;

        while(!pq.empty()) {

            auto p1 = pq.top();
            pq.pop();

            result.push_back({
                p1.second.first,
                p1.second.second
            });
        }

        return result;
    }
};