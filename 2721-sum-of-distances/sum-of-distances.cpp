class Solution {
public:
    vector<long long> distance(vector<int>& nums) {
        int n = nums.size();
        vector<long long> ans(n, 0);

        unordered_map<int, vector<int>> mp;

        // Store indices of each value
        for (int i = 0; i < n; i++) {
            mp[nums[i]].push_back(i);
        }

        // Process each group of same values
        for (auto &it : mp) {
            vector<int>& idx = it.second;
            int m = idx.size();

            if (m == 1) continue;

            vector<long long> prefix(m, 0);
            prefix[0] = idx[0];

            for (int i = 1; i < m; i++) {
                prefix[i] = prefix[i - 1] + idx[i];
            }

            for (int i = 0; i < m; i++) {
                long long left = 0, right = 0;

                // Sum of distances to left side
                if (i > 0) {
                    left = 1LL * i * idx[i] - prefix[i - 1];
                }

                // Sum of distances to right side
                if (i < m - 1) {
                    right = (prefix[m - 1] - prefix[i]) - 1LL * (m - i - 1) * idx[i];
                }

                ans[idx[i]] = left + right;
            }
        }

        return ans;
    }
};