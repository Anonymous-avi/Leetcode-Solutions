class Solution {
public:
    vector<int> smallestRange(vector<vector<int>>& nums) {

        int k = nums.size();

        // {element, {listIndex, elementIndex}}
        priority_queue<
            pair<int, pair<int, int>>,
            vector<pair<int, pair<int, int>>>,
            greater<pair<int, pair<int, int>>>
        > pq;

        int maxElement = INT_MIN;

        // Put first element of every list into min heap
        for (int i = 0; i < k; i++) {

            pq.push({nums[i][0], {i, 0}});

            maxElement = max(maxElement, nums[i][0]);
        }

        // Initially take a very large range
        vector<int> result = {0, INT_MAX};

        while (true) {

            // Get minimum element
            auto current = pq.top();
            pq.pop();

            int minElement = current.first;
            int listIndex = current.second.first;
            int elementIndex = current.second.second;

            // Check current range
            if (maxElement - minElement <
                result[1] - result[0]) {

                result[0] = minElement;
                result[1] = maxElement;
            }

            // Move to next element of the same list
            elementIndex++;

            // If this list is finished, stop
            if (elementIndex >= nums[listIndex].size()) {
                break;
            }

            int nextElement = nums[listIndex][elementIndex];

            // Push next element
            pq.push({
                nextElement,
                {listIndex, elementIndex}
            });

            // Update maximum
            maxElement = max(maxElement, nextElement);
        }

        return result;
    }
};