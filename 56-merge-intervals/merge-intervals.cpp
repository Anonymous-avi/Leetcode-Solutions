class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {

        vector<vector<int>> result;

        if (intervals.empty()) return result;

        // 1️⃣ Sort intervals by start time
        sort(intervals.begin(), intervals.end());

        // 2️⃣ Start with the first interval
        vector<int> current = intervals[0];

        // 3️⃣ Traverse remaining intervals
        for (int i = 1; i < intervals.size(); i++) {
            if (intervals[i][0] <= current[1]) {
                // Overlap → merge
                current[1] = max(current[1], intervals[i][1]);
            } else {
                // No overlap → store current and reset
                result.push_back(current);
                current = intervals[i];
            }
        }

        // 4️⃣ Push the last interval
        result.push_back(current);

        return result;
    }
};
