class Solution {
public:
    bool wordPattern(string pattern, string s) {
        vector<string> words;
        string temp = "";

        // Step 1: split s into words
        for (int i = 0; i <= s.size(); i++) {
            if (i == s.size() || s[i] == ' ') {
                words.push_back(temp);
                temp = "";
            } else {
                temp += s[i];
            }
        }

        // Step 2: length check
        if (pattern.size() != words.size())
            return false;

        unordered_map<char, string> mp1;
        unordered_map<string, char> mp2;

        // Step 3: check bijection
        for (int i = 0; i < pattern.size(); i++) {
            char ch = pattern[i];
            string word = words[i];

            // char -> word mapping check
            if (mp1.count(ch) && mp1[ch] != word)
                return false;

            // word -> char mapping check
            if (mp2.count(word) && mp2[word] != ch)
                return false;

            mp1[ch] = word;
            mp2[word] = ch;
        }

        return true;
    }
};
