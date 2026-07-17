class Solution {
public:
    vector<string> removeAnagrams(vector<string>& words) {
        vector<string> ans;

        string prev = "";

        for (string word : words) {
            string curr = word;
            sort(curr.begin(), curr.end());

            if (curr != prev) {
                ans.push_back(word);
                prev = curr;
            }
        }

        return ans;
    }
};