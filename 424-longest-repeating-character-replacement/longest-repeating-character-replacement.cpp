class Solution {
public:
    int characterReplacement(string s, int k) {
        vector<int> freq(26, 0);

        int left = 0, maxFreq = 0, maxi = 0;

        for(int right = 0; right < s.size(); right++){
            freq[s[right] - 'A']++;

            maxFreq = max(maxFreq, freq[s[right] - 'A']);

            int windowSize = right - left + 1;

            if(windowSize - maxFreq > k){
                freq[s[left] - 'A']--;
                left++;
            }

            maxi = max(maxi, right - left + 1);
        }

        return maxi;
    }
};