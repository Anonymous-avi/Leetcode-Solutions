class Solution {
public:

    void solve(vector<int>& nums,
               vector<int>& temp,
               vector<bool>& used,
               vector<vector<int>>& result) {

        // If temp contains all elements,
        // we have formed one complete permutation
        if (temp.size() == nums.size()) {
            result.push_back(temp);
            return;
        }

        // Try every element
        for (int i = 0; i < nums.size(); i++) {

            // If this element is already used,
            // don't use it again
            if (used[i])
                continue;

            // Choose
            temp.push_back(nums[i]);
            used[i] = true;

            // Explore
            solve(nums, temp, used, result);

            // Undo / Backtrack
            temp.pop_back();
            used[i] = false;
        }
    }

    vector<vector<int>> permute(vector<int>& nums) {

        vector<vector<int>> result;
        vector<int> temp;

        vector<bool> used(nums.size(), false);

        solve(nums, temp, used, result);

        return result;
    }
};