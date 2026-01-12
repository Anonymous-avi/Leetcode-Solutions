class Solution {
public:
    bool checkIfPangram(string sentence) {

        unordered_map<char, int> mp;

        for (char ch = 'a'; ch <= 'z'; ch++) {
            mp[ch] = 0;
        }

        for (char ch : sentence) {
            mp[ch]++;
        }

        for (auto it : mp) {
            if (it.second == 0) {
                return false;
            }
        }

        return true;
    }
};