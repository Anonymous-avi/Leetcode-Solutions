class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        unordered_set<char>jewelSet;
        for(char c : jewels){
            jewelSet.insert(c);
        }
        int count=0;
        for(char c: stones){
            if(jewelSet.count(c)){
                count++;
            }

        }
        return count;
        
    }
};